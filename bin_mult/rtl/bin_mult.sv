`timescale 1ps/1ps

module bin_mult (
    input logic CLK,
    input logic rst_n,
    input logic [31:0] A,
    input logic [31:0] B,
    output logic [63:0] C
);

reg [63:0] partial_prod;
reg [63:0] temp_prod;

// genvar i;
// genvar j;
generate
        
    // shift bit and add to previous partial product
    always_ff @( posedge CLK ) begin

        if (!rst_n) begin
            temp_prod <= 64'b0;

        end else begin
            reg [63:0] next_sum;
            next_sum = 64'b0;
            for (int i = 0; i < 32; i++) begin
                reg [63:0] partial_prod;
                partial_prod[31:0] = A & {32{B[i]}};
                partial_prod[63:32] = 32'b0;
                next_sum += (partial_prod << i);
            end
            temp_prod <= next_sum;

        end
    end
    assign C = temp_prod;

endgenerate
    
endmodule
