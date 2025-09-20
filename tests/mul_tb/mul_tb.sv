module mul_tb;

logic [31:0] A;
logic [31:0] B;
logic [31:0] C;

mul mul(
    .A(A),
    .B(B),
    .C(C)
);

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
    logic [31:0] expected;

    A = A_test;
    B = B_test;

    #1;

    expected = mul_ref(A, B);
endtask //automatic

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