from pathlib import Path

OUT_RTL = Path("rtl/bin_mult.sv")
OUT_PIN_ORDER = Path("constraints/pin_order.cfg")
OUT_SDC = Path("constraints/bin_mult.sdc")

A_WIDTH = 32
B_WIDTH = 32
C_WIDTH = 64


def scalar_ports(prefix, width, direction):
    lines = []
    for i in range(width):
        lines.append(f"    {direction} logic {prefix}_{i},")
    return lines


def bus_pack(prefix, width):
    return "{ " + ", ".join(f"{prefix}_{i}" for i in reversed(range(width))) + " }"


def output_assigns(prefix, bus_name, width):
    return "\n".join(f"    assign {prefix}_{i} = {bus_name}[{i}];" for i in range(width))


port_lines = []
port_lines.append("    input  logic clk,")
port_lines.append("    input  logic rst_n,")
port_lines.append("")
port_lines.append("    input  logic vld_in,")
port_lines.append("    input  logic rdy_out,")
port_lines.append("")
port_lines += scalar_ports("A", A_WIDTH, "input ")
port_lines.append("")
port_lines += scalar_ports("B", B_WIDTH, "input ")
port_lines.append("")
port_lines += scalar_ports("C", C_WIDTH, "output")
port_lines.append("")
port_lines.append("    output logic vld_out,")
port_lines.append("    output logic rdy_in")

# Remove comma from final port line
port_lines[-1] = port_lines[-1].rstrip(",")

wrapper = f"""`timescale 1ps/1ps

// -----------------------------------------------------------------------------
// OpenLane/LVS wrapper for bin_mult_core
//
// Purpose:
//   - Exposes scalar top-level pins A_0..A_31, B_0..B_31, C_0..C_63.
//   - Keeps the real multiplier RTL clean inside bin_mult_core.
//   - Avoids LVS bus naming mismatches such as A[0] in SPICE vs A[31:0]
//     in gate-level Verilog.
// -----------------------------------------------------------------------------

module bin_mult (
{chr(10).join(port_lines)}
);

    logic [31:0] A_bus;
    logic [31:0] B_bus;
    logic [63:0] C_bus;

    assign A_bus = {bus_pack("A", A_WIDTH)};
    assign B_bus = {bus_pack("B", B_WIDTH)};

    bin_mult_core core (
        .clk     (clk),
        .rst_n   (rst_n),

        .vld_in  (vld_in),
        .rdy_out (rdy_out),

        .A       (A_bus),
        .B       (B_bus),
        .C       (C_bus),

        .vld_out (vld_out),
        .rdy_in  (rdy_in)
    );

{output_assigns("C", "C_bus", C_WIDTH)}

endmodule
"""

pin_order = """#N
clk
rst_n
vld_in
rdy_out

#W
A_.*

#E
B_.*

#S
C_.*
vld_out
rdy_in
"""

sdc = """create_clock -name clk -period 50 [get_ports clk]

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
"""

OUT_RTL.write_text(wrapper)
OUT_PIN_ORDER.write_text(pin_order)
OUT_SDC.write_text(sdc)

print(f"Wrote {OUT_RTL}")
print(f"Wrote {OUT_PIN_ORDER}")
print(f"Wrote {OUT_SDC}")