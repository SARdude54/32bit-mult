`timescale 1ps/1ps

module bin_mult_tb;

logic CLK;
logic rst_n;
logic [31:0] A, B;
logic [63:0] C;

bin_mult DUT(
    .CLK(CLK),
    .rst_n(rst_n),
    .A(A),
    .B(B),
    .C(C)
);

initial CLK = 0;
always #5 CLK = ~CLK;

initial begin
    A = '0;
    B = '0;
    rst_n = 0;
    repeat (4) @(posedge CLK);
    rst_n = 1;
    repeat (2) @(posedge CLK);
end

endmodule

