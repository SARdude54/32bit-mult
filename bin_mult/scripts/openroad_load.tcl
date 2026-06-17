set RUN_DIR "runs/ANTENNAS_DIODE_PADDING_4"

read_db "$RUN_DIR/final/odb/bin_mult.odb"

set LIB "$::env(PDKPATH)/libs.ref/sky130_fd_sc_hd/lib/sky130_fd_sc_hd__ss_100C_1v60.lib"
set SDC "$RUN_DIR/final/sdc/bin_mult.sdc"

puts "Using LIB: $LIB"
puts "Using SDC: $SDC"

if {![file exists $LIB]} {
    error "Liberty file not found: $LIB"
}

if {![file exists $SDC]} {
    error "SDC file not found: $SDC"
}

read_lib $LIB
read_sdc $SDC

set spefs [glob -nocomplain "$RUN_DIR/final/spef/*.spef"]
if {[llength $spefs] > 0} {
    read_spef [lindex $spefs 0]
    puts "Loaded SPEF: [lindex $spefs 0]"
} else {
    puts "WARNING: No SPEF found. Timing will not include extracted parasitics."
}

puts "Checking clocks from SDC..."
puts "Clocks: [get_clocks *]"

report_worst_slack -max
report_worst_slack -min

report_checks -path_delay max \
    -fields {slew cap input_pins nets fanout} \
    -digits 4 \
    -sort_by_slack \
    -group_count 10

report_checks -path_delay min \
    -fields {slew cap input_pins nets fanout} \
    -digits 4 \
    -sort_by_slack \
    -group_count 10

gui::show