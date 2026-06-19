`timescale 1ps/1ps

module tb_radix4_mult;

logic CLK;
logic rst_n;
logic signed [31:0] A, B;
logic signed [63:0] C;

// handshake signals
logic vld_in;
logic vld_out;
logic rdy_in;
logic rdy_out;

radix4_mult DUT(
    .CLK(CLK),
    .rst_n(rst_n),

    .vld_in(vld_in),
    .rdy_out(rdy_out),

    .A(A),
    .B(B),
    .C(C),

    .vld_out(vld_out),
    .rdy_in(rdy_in)
);

initial CLK = 0;
always #5 CLK = ~CLK;

// dump waveform block
initial begin
    if ($test$plusargs("dump") || 1) begin
        $dumpfile("wave.vcd");
        $dumpvars(0, tb_radix4_mult);
    end
end

// reset block
initial begin
    A = 32'b0;
    B = 32'b0;
    rst_n = 0;
    vld_in = 0;
    rdy_out = 0;   

    repeat (4) @(posedge CLK);

    rst_n = 1;
    A = 32'b0;
    B = 32'b0;
    vld_in = 0;
    rdy_out = 0;

    repeat (2) @(posedge CLK);
end

// start testbench
initial begin
    logic signed [63:0] expected;
    wait (rst_n === 1'b1);

    
    A = 100;
    B = 100;
    expected = A * B;

    // Wait until DUT is ready to accept input
    @(posedge CLK);
    while (!rdy_in) @(posedge CLK);

    // Start valid input for one cycle
    vld_in = 1;
    @(posedge CLK);
    vld_in = 0;

    // Wait until output is ready
    @(posedge CLK);
    while (!vld_out) @(posedge CLK);

    // check output with expected
    assert (C == expected)
      else $error("Incorrect: A=%0d B=%0d C=%0d, expected=%0d", A, B, C, expected);

    // Acknowledge we read the output
    rdy_out = 1;
    @(posedge CLK);
    rdy_out = 0;

    // next testcase
    A = 3423;
    B = 1123;
    expected = A * B;

    // Wait until DUT is ready to accept input
    @(posedge CLK);
    while (!rdy_in) @(posedge CLK);

    // Wait until output is ready
    vld_in = 1;
    @(posedge CLK);
    vld_in = 0;

    // Wait until output is ready
    @(posedge CLK);
    while (!vld_out) @(posedge CLK);

    // check output with expected
    assert (C == expected)
      else $error("Incorrect: A=%0d B=%0d C=%0d, expected=%0d", A, B, C, expected);

    // Acknowledge we read the output
    rdy_out = 1;
    @(posedge CLK);
    rdy_out = 0;

    $display("Test complete");
    #50;
    $finish;
end

endmodule
