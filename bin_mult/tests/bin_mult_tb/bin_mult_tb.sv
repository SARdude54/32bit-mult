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

// dump waveform block
initial begin
    if ($test$plusargs("dump") || 1) begin
        $dumpfile("wave.vcd");
        $dumpvars(0, mul_tb);
    end
end

// reset block
initial begin
    A = '0;
    B = '0;
    rst_n = 0;
    repeat (4) @(posedge CLK);
    rst_n = 1;
    repeat (2) @(posedge CLK);
end

// test block - test some values
initial begin

    wait (rst_n == 1);

    repeat (2) @(posedge CLK);
    A = 2;
    B = 2;

    repeat (2) @(posedge CLK);
    A = 8;
    B = 9;

    repeat (2) @(posedge CLK);
    A = 100;
    B = 100;

    $display("Test complete");
    #50
    $finish;
end

endmodule

