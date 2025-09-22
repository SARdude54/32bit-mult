# basic config
set ::env(DESIGN_NAME) mul
set ::env(VERILOG_FILES) [list $::env(DESIGN_DIR)/rtl/mul.sv]
set ::env(CLOCK_PORT)   CLK
set ::env(CLOCK_PERIOD) 100

# Power nets
set ::env(VDD_NETS) [list VPWR]
set ::env(GND_NETS) [list VGND]

# Netgen setup and std-cell SPICE libraries for LVS
set ::env(NETGEN_SETUP_FILE) /foss/pdks/sky130A/libs.tech/netgen/sky130A_setup.tcl

# Cover OpenLane variants
set ::env(LVS_SPICE_FILES) [list \
  /foss/pdks/sky130A/libs.ref/sky130_fd_sc_hd/spice/sky130_fd_sc_hd.spice \
  /foss/pdks/sky130A/libs.ref/sky130_ef_sc_hd/spice/sky130_ef_sc_hd.spice \
]
set ::env(LVS_EXTRA_SPICE) $::env(LVS_SPICE_FILES)

# Use HD library
set ::env(STD_CELL_LIBRARY) sky130_fd_sc_hd
