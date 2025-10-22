`timescale 1ns / 1ps

module counter #(
    parameter WIDTH = 4
)(
    input  logic clk,
    input  logic rst_n,
    input  logic en,
    output logic [WIDTH-1:0] count
    );

    always_ff @(negedge clk) begin
        if (!rst_n)
            count <= 0;
        else if (en)
            count <= count + 1;
    end
endmodule