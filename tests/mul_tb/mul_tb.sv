module mul_tb;

logic CLK;
logic [31:0] A;
logic [31:0] B;
logic [31:0] C;

mul mul(
    .CLK(CLK),
    .A(A),
    .B(B),
    .C(C)
);

initial CLK = 0;
always #5 CLK = ~CLK;

initial begin
    if ($test$plusargs("dump") || 1) begin
        $dumpfile("wave.vcd");
        $dumpvars(0, mul_tb);
    end
end

function automatic [31:0] mul_ref(input [31:0] A, input [31:0] B);
    return A * B;
endfunction

task automatic send_and_check(input logic [31:0] A_test, input logic [31:0] B_test);
    logic [31:0] expected = 32'(A_test) * 32'(B_test);

    @(negedge CLK);

    A = A_test;
    B = B_test;

    @(posedge CLK); // capture inputs
    @(posedge CLK); // product registered  to C
    @(negedge CLK);

    if(C != expected)
        $error("[%0t] Mismatch: A=%0d B=%0d C=%0d exp=%0d", $time, A_test, B_test, C, expected);

endtask

initial begin

    A = '0;
    B = '0;
    #1;

    for(int i = 1; i <= 10; i++) begin
        for (int j = 1; j <= 10; j++) begin
            send_and_check(i, j);
        end
    end

    $display("Test Complete");
    $finish;

end


endmodule