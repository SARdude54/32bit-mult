`timescale 1ps/1ps

module bin_mult_core (
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

    logic [63:0] sum_stage [0:32];

    logic fire_in;
    logic fire_out;

    assign fire_in  = vld_in  && rdy_in;
    assign fire_out = vld_out && rdy_out;

    // This multiplier has one output register.
    // It can accept new input when:
    //   1. output register is empty, or
    //   2. output register is being consumed this cycle.
    assign rdy_in = !vld_out || rdy_out;

    assign sum_stage[0] = 64'b0;

    genvar i;
    generate
        for (i = 0; i < 32; i = i + 1) begin : gen_bin_mult
            bin_mult_stage #(
                .SHIFT(i)
            ) stage_i (
                .sum_in  (sum_stage[i]),
                .A       (A),
                .b_bit   (B[i]),
                .sum_out (sum_stage[i+1])
            );
        end
    endgenerate

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            C       <= 64'b0;
            vld_out <= 1'b0;
        end else begin
            if (fire_in) begin
                C       <= sum_stage[32];
                vld_out <= 1'b1;
            end else if (fire_out) begin
                vld_out <= 1'b0;
            end
        end
    end

endmodule

