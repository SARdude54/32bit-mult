`timescale 1ps/1ps

module tb_radix4_mult;

logic CLK;
logic rst_n;
logic [31:0] A, B;
logic [63:0] C;

logic valid_out;
logic valid_in;

radix4_mult DUT(
    .CLK(CLK),
    .rst_n(rst_n),
    .valid_in(valid_in),
    .A(A),
    .B(B),
    .C(C),
    .valid_out(valid_out)
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
    valid_in = 0;
    repeat (4) @(posedge CLK);
    rst_n = 1;
    repeat (2) @(posedge CLK);
end

initial begin
    wait (rst_n == 1);
    A = 100;
    B = 100;
    valid_in = 1;
    repeat (16) @(posedge CLK);
    valid_in = 0;

    wait (valid_out == 1);
    
    assert (C == 10000) else $error("Incorrect Result");


    $display("Test complete");
    #50;
    $finish;
end
endmodule

