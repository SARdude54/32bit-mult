`timescale 1ps/1ps

module pipe_stage #(
    parameter integer FIRST_BIT = 0
) (
    input  logic [63:0] sum_in,
    input  logic [31:0] A,
    input  logic [31:0] B,
    output logic [63:0] sum_out
);

    // Eight independently generated partial products.
    //
    // There is no feedback path:
    //   A/B -> partial products -> adder tree -> sum_out
    logic [63:0] pp0;
    logic [63:0] pp1;
    logic [63:0] pp2;
    logic [63:0] pp3;
    logic [63:0] pp4;
    logic [63:0] pp5;
    logic [63:0] pp6;
    logic [63:0] pp7;

    // First level of the balanced reduction tree.
    logic [63:0] add_l1_0;
    logic [63:0] add_l1_1;
    logic [63:0] add_l1_2;
    logic [63:0] add_l1_3;

    // Second level of the reduction tree.
    logic [63:0] add_l2_0;
    logic [63:0] add_l2_1;

    // Final partial-product sum.
    logic [63:0] partial_sum;

    // Partial-product generation.
    assign pp0 = B[FIRST_BIT + 0] ? ({32'b0, A} << (FIRST_BIT + 0)) : 64'b0;

    assign pp1 = B[FIRST_BIT + 1] ? ({32'b0, A} << (FIRST_BIT + 1)) : 64'b0;

    assign pp2 = B[FIRST_BIT + 2] ? ({32'b0, A} << (FIRST_BIT + 2)) : 64'b0;

    assign pp3 = B[FIRST_BIT + 3] ? ({32'b0, A} << (FIRST_BIT + 3)) : 64'b0;

    assign pp4 = B[FIRST_BIT + 4] ? ({32'b0, A} << (FIRST_BIT + 4)) : 64'b0;

    assign pp5 = B[FIRST_BIT + 5] ? ({32'b0, A} << (FIRST_BIT + 5)) : 64'b0;

    assign pp6 = B[FIRST_BIT + 6] ? ({32'b0, A} << (FIRST_BIT + 6)) : 64'b0;

    assign pp7 = B[FIRST_BIT + 7] ? ({32'b0, A} << (FIRST_BIT + 7)) : 64'b0;

    // Balanced adder tree.

    // Level 1: four additions
    // Level 2: two additions
    // Level 3: one addition
    // Level 4: add incoming accumulated sum
    
    // This is fully feed-forward. No signal depends on itself, directly or indirectly.
    assign add_l1_0 = pp0 + pp1;
    assign add_l1_1 = pp2 + pp3;
    assign add_l1_2 = pp4 + pp5;
    assign add_l1_3 = pp6 + pp7;

    assign add_l2_0 = add_l1_0 + add_l1_1;
    assign add_l2_1 = add_l1_2 + add_l1_3;

    assign partial_sum = add_l2_0 + add_l2_1;

    assign sum_out = sum_in + partial_sum;

endmodule

