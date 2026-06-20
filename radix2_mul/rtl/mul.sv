`timescale 1ps/1ps

`default_nettype none

module mul (

    `ifdef USE_POWER_PINS
        inout wire VPWR, 
        inout wire VGND,
    `endif

    input  logic        clk,
    input  logic        rst_n,

    input  logic        vld_in,
    input  logic        rdy_out,

    input  logic [31:0] A,
    input  logic [31:0] B,
    output logic [63:0] C,

    output logic        vld_out,
    output logic        rdy_in
);

    // Pipeline register valid signals
    logic vld_s0;
    logic vld_s1;
    logic vld_s2;
    logic vld_s3;

    // Elastic pipeline ready signals
    logic rdy_s0;
    logic rdy_s1;
    logic rdy_s2;
    logic rdy_s3;

    assign rdy_s3 = !vld_s3 || rdy_out;
    assign rdy_s2 = !vld_s2 || rdy_s3;
    assign rdy_s1 = !vld_s1 || rdy_s2;
    assign rdy_s0 = !vld_s0 || rdy_s1;

    assign rdy_in = rdy_s0;
    assign vld_out = vld_s3;

    // Pipeline register data
    logic [63:0] sum_s0;
    logic [63:0] sum_s1;
    logic [63:0] sum_s2;

    logic [31:0] a_s0;
    logic [31:0] a_s1;
    logic [31:0] a_s2;

    logic [31:0] b_s0;
    logic [31:0] b_s1;
    logic [31:0] b_s2;

    // combinatorial arithemtic for each pipeline segement
    logic [63:0] sum_s0_d;
    logic [63:0] sum_s1_d;
    logic [63:0] sum_s2_d;
    logic [63:0] sum_s3_d;

    // add partial products for B[7:0]
    pipe_stage #(
        .FIRST_BIT(0)
        ) stage0 (
        .sum_in (64'b0),
        .A (A),
        .B (B),
        .sum_out(sum_s0_d)
    );

    // add partial products for B[15:8]
    pipe_stage #(
        .FIRST_BIT(8)
        ) stage1 (
        .sum_in (sum_s0),
        .A (a_s0),
        .B (b_s0),
        .sum_out(sum_s1_d)
    );

    // add partial products for B[23:16]
    pipe_stage #(
        .FIRST_BIT(16)
        ) stage2 (
        .sum_in (sum_s1),
        .A (a_s1),
        .B (b_s1),
        .sum_out(sum_s2_d)
    );

    // add partial products for B[31:24]
    pipe_stage #(
        .FIRST_BIT(24)
    ) stage3 (
        .sum_in (sum_s2),
        .A (a_s2),
        .B (b_s2),
        .sum_out(sum_s3_d)
    );

    // pipeline registers
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            vld_s0 <= 1'b0;
            vld_s1 <= 1'b0;
            vld_s2 <= 1'b0;
            vld_s3 <= 1'b0;

            sum_s0 <= 64'b0;
            sum_s1 <= 64'b0;
            sum_s2 <= 64'b0;

            a_s0 <= 32'b0;
            a_s1 <= 32'b0;
            a_s2 <= 32'b0;

            b_s0 <= 32'b0;
            b_s1 <= 32'b0;
            b_s2 <= 32'b0;

            C <= 64'b0;

        end else begin

            // Output stage
            if (rdy_s3) begin
                vld_s3 <= vld_s2;

                if (vld_s2) begin
                    C <= sum_s3_d;
                end
            end

            // Stage 2
            if (rdy_s2) begin
                vld_s2 <= vld_s1;

                if (vld_s1) begin
                    sum_s2 <= sum_s2_d;
                    a_s2   <= a_s1;
                    b_s2   <= b_s1;
                end
            end

            // Stage 1
            if (rdy_s1) begin
                vld_s1 <= vld_s0;

                if (vld_s0) begin
                    sum_s1 <= sum_s1_d;
                    a_s1   <= a_s0;
                    b_s1   <= b_s0;
                end
            end

            // Input stage
            if (rdy_s0) begin
                vld_s0 <= vld_in;

                if (vld_in) begin
                    sum_s0 <= sum_s0_d;
                    a_s0   <= A;
                    b_s0   <= B;
                end
            end
        end
    end

endmodule

`default_nettype wire
