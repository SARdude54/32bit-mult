`timescale 1ps/1ps

module radix4_mult (
    input logic CLK,
    input logic rst_n,

    input logic vld_in,
    input logic rdy_out,

    input logic [31:0] A,
    input logic [31:0] B,
    output logic [63:0] C,

    output logic vld_out,
    output logic rdy_in
    );

// index for radix table
logic [5:0] idx;
assign idx = {2'b00, count} << 1;

// extend bits for radix
wire [32:0] B_ext;
reg signed [63:0] sum;
logic signed [63:0] a_ext;
logic signed [63:0] term;

// input registers
reg [31:0] a_reg;
reg [31:0] b_reg;

// define internal control signals
wire start = vld_in && (!valid) && (!vld_out);
wire accepted_out = vld_out && rdy_out;
reg valid;

// counter to track sums
reg [3:0] count;
counter group_counter(
    .clk(CLK),
    .en(valid),
    .clr(start || !rst_n),
    .count(count)
);

// save inputs register
always_ff @( posedge CLK ) begin
    if (!rst_n) begin
        a_reg <= 0; b_reg <= 0;
    end else if (start) begin
        a_reg <= A;
        b_reg <= B;
    end

end

// set extended inputs
assign a_ext = {{32{a_reg[31]}}, a_reg};
assign B_ext = {b_reg, 1'b0};

// radix-4 table
always_comb begin
    term = 64'b0;
    unique case ({B_ext[idx+2], B_ext[idx+1], B_ext[idx]})
            3'b000: term = 64'b0;
            3'b001: term = a_ext;
            3'b010: term = a_ext;
            3'b011: term = a_ext <<< 1;
            3'b100: term = -(a_ext <<< 1);
            3'b101: term = -a_ext;
            3'b110: term = -a_ext;
            3'b111: term = 64'b0;
        endcase
end

// sum register
always_ff @(posedge CLK) begin
  if (!rst_n) begin
    sum     <= 64'sd0;
    vld_out <= 1'b0;
    rdy_in  <= 1'b1;
    valid   <= 1'b0;
  end else begin

    // default ready in
    rdy_in <= !valid && !vld_out;

    // start a new operation
    if (start) begin
      sum   <= 64'sd0;
      valid <= 1'b1;
    end

    // iterate sums
    if (valid) begin
      sum <= sum + (term <<< (2*count));
      if (count == 4'd15) begin
        valid   <= 1'b0;
        vld_out <= 1'b1;
      end
    end

    // output handshake clears vld_out
    if (accepted_out) begin
      vld_out <= 1'b0;
    end
  end
end


// set final result
assign C = sum;
    
endmodule


