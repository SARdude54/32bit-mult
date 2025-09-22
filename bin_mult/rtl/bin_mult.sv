`timescale 1ps/1ps

module bin_mult (
    logic input CLK;
    logic input rst_n;
    logic input [31:0] A;
    logic input [31:0] B;
    logic output [63:0] C;
);

wire [31:0][64:0] partial_prod;

genvar i;
genvar j;
generate
    for (i = 0; i < 32; i++) begin
        for (j = 0; j < 32; j++) begin
            assign partial_prod[i] = A[j] && B[i];
        end
    end
endgenerate
    
endmodule
