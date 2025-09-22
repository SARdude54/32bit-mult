`timescale 1ps/1ps

module mul (
    input logic CLK,
    input logic rst_n,
    input logic [31:0] A,
    input logic [31:0] B,
    output logic [31:0] C
);

logic [31:0] a_q, b_q, c_q;

always_ff @( posedge CLK ) begin
    if (!rst_n) begin
        a_q <= 32'b0;
        b_q <= 32'b0;
        C <= 32'b0;
    end else begin
        a_q <= A;
        b_q <= B;
        C <= c_q;
    end
end

assign c_q = a_q * b_q;
    
endmodule