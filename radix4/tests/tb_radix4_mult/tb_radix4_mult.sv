`timescale 1ps/1ps

module tb_radix4_mult;

logic CLK;
logic rst_n;
logic [31:0] A, B;
logic [63:0] C;

radix4_mult DUT(
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
        $dumpvars(0, tb_radix4_mult);
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

task automatic send_and_check(input logic [31:0] A_test, input logic [31:0] B_test);
    logic [63:0] expected = 32'(A_test) * 32'(B_test);

    @(negedge CLK);

    A = A_test;
    B = B_test;

    @(posedge CLK);
    @(posedge CLK);
    @(negedge CLK);

    if(C != expected)
        $error("[%0t] Mismatch: A=%0d B=%0d C=%0d exp=%0d", $time, A_test, B_test, C, expected);

endtask

// test block - test some values
initial begin

    wait (rst_n == 1);

    repeat (2) @(posedge CLK);
    send_and_check(100, 100);

    repeat (2) @(posedge CLK);

    $display("Test complete");
    #500
    $finish;
end

endmodule

