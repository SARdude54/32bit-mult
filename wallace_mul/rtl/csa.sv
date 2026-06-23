`timescale 1ps/1ps

module csa #(
    parameter int WIDTH = 65
) (
    input logic [WIDTH-1:0] x,
    input logic [WIDTH-1:0] y,
    input logic [WIDTH-1:0] z,

    output logic [WIDTH-1:0] sum,
    output logic [WIDTH-1:0] carry
);

    logic [WIDTH-1:0] marjority;
    
    assign sum = x ^ y ^z;
    assign marjority = (x & y) | (x & z) | (y & z);

    assign carry = {marjority[WIDTH-2:0], 1'b0};
    
endmodule

