create_clock -name clk -period 50 [get_ports clk]

set_input_delay 1.0 -clock [get_clocks clk] [get_ports {
    vld_in
    rdy_out
    A_*
    B_*
}]

set_output_delay 1.0 -clock [get_clocks clk] [get_ports {
    C_*
    vld_out
    rdy_in
}]

set_false_path -from [get_ports rst_n]
