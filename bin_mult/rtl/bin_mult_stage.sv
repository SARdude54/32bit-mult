`timescale 1ps/1ps

module bin_mult_stage #(
    parameter SHIFT = 0
) (
    input  logic [63:0] sum_in,
    input  logic [31:0] A,
    input  logic        b_bit,
    output logic [63:0] sum_out
);

    logic [63:0] partial_prod;

    assign partial_prod = b_bit ? ({32'b0, A} << SHIFT) : 64'b0;
    assign sum_out      = sum_in + partial_prod;

endmodule

