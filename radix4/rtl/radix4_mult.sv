`timescale 1ps/1ps

module radix4_mult (
    input logic CLK,
    input logic rst_n,
    input logic valid_in,
    input logic [31:0] A,
    input logic [31:0] B,
    output logic valid_out,
    output logic [63:0] C
);



reg [3:0] count;
counter group_counter(
    .clk(CLK),
    .rst_n(rst_n),
    .en(valid_in),
    .count(count)
);

logic [5:0] idx;
assign idx = {2'b00, count} << 1;

wire [32:0] B_ext;
reg signed [63:0] sum;

logic signed [63:0] a_ext;
logic signed [63:0] term;

assign a_ext = {{32{A[31]}}, A};
assign B_ext = {B, 1'b0};

always_comb begin
    unique case ({B_ext[idx+2], B_ext[idx+1], B_ext[idx]})
            3'b000: term = 64'b0;
            3'b001: term = a_ext;
            3'b010: term = a_ext;
            3'b011: term = a_ext <<< 1;
            3'b100: term = -(a_ext <<< 1);
            3'b101: term = -a_ext;
            3'b110: term = -(a_ext <<< 1);
            3'b111: term = 64'b0;
        endcase
end

always_ff @( posedge CLK ) begin
    if(!rst_n) begin
        valid_out <= 1'b0;
        sum <= 0;
    end
    else if (valid_in) begin
        sum <= sum + (term  <<< (2*count));
        valid_out <= (count == 4'b1111);
    end
end


assign C = sum;
    
endmodule
