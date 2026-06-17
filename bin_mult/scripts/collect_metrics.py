from pathlib import Path
import argparse
import json

parser = argparse.ArgumentParser()
parser.add_argument("run_dir", help="Path to an OpenLane run directory")
args = parser.parse_args()

run_dir = Path(args.run_dir)

metrics_path = run_dir / "final" / "metrics.json"

if not metrics_path.exists():
    print(f"Could not find: {metrics_path}")
    exit(1)

with open(metrics_path, "r") as f:
    metrics = json.load(f)


print("\n=== Run Health ===")
print(f"Flow errors: {metrics.get('flow__errors__count')}")
print(f"Flow warnings: {metrics.get('flow__warnings__count')}")
print(f"Lint errors: {metrics.get('design__lint_error__count')}")
print(f"Lint warnings: {metrics.get('design__lint_warning__count')}")
print(f"Inferred latches: {metrics.get('design__inferred_latch__count')}")
print(f"Unmapped cells: {metrics.get('design__instance_unmapped__count')}")
print(f"Synthesis check errors: {metrics.get('synthesis__check_error__count')}")

print("\n=== Area / Size ===")
print(f"Instance count: {metrics.get('design__instance__count')}")
print(f"Stdcell count: {metrics.get('design__instance__count__stdcell')}")
print(f"Instance area: {metrics.get('design__instance__area')}")
print(f"Stdcell area: {metrics.get('design__instance__area__stdcell')}")
print(f"Core area: {metrics.get('design__core__area')}")
print(f"Die area: {metrics.get('design__die__area')}")
print(f"Utilization: {metrics.get('design__instance__utilization')}")

print("\n=== Cell Breakdown ===")
print(f"Inverters: {metrics.get('design__instance__count__class:inverter')}")
print(f"Sequential cells: {metrics.get('design__instance__count__class:sequential_cell')}")
print(f"Multi-input combinational cells: {metrics.get('design__instance__count__class:multi_input_combinational_cell')}")
print(f"Timing repair buffers: {metrics.get('design__instance__count__class:timing_repair_buffer')}")
print(f"Clock buffers: {metrics.get('design__instance__count__class:clock_buffer')}")
print(f"Clock inverters: {metrics.get('design__instance__count__class:clock_inverter')}")
print(f"Setup buffers: {metrics.get('design__instance__count_setup_buffer')}")
print(f"Hold buffers: {metrics.get('design__instance__count_hold_buffer')}")

print("\n=== Timing Summary ===")
print(f"Setup worst slack: {metrics.get('timing__setup__ws')}")
print(f"Hold worst slack: {metrics.get('timing__hold__ws')}")
print(f"Setup TNS: {metrics.get('timing__setup__tns')}")
print(f"Hold TNS: {metrics.get('timing__hold__tns')}")
print(f"Setup WNS: {metrics.get('timing__setup__wns')}")
print(f"Hold WNS: {metrics.get('timing__hold__wns')}")
print(f"Setup violations: {metrics.get('timing__setup_vio__count')}")
print(f"Hold violations: {metrics.get('timing__hold_vio__count')}")
print(f"Setup R2R worst slack: {metrics.get('timing__setup_r2r__ws')}")
print(f"Hold R2R worst slack: {metrics.get('timing__hold_r2r__ws')}")

print("\n=== Setup Slack by Corner ===")
print(f"TT setup slack: {metrics.get('timing__setup__ws__corner:max_tt_025C_1v80')}")
print(f"SS setup slack: {metrics.get('timing__setup__ws__corner:max_ss_100C_1v60')}")
print(f"FF setup slack: {metrics.get('timing__setup__ws__corner:max_ff_n40C_1v95')}")

print("\n=== Hold Slack by Corner ===")
print(f"TT hold slack: {metrics.get('timing__hold__ws__corner:min_tt_025C_1v80')}")
print(f"SS hold slack: {metrics.get('timing__hold__ws__corner:min_ss_100C_1v60')}")
print(f"FF hold slack: {metrics.get('timing__hold__ws__corner:min_ff_n40C_1v95')}")

print("\n=== Routing / Physical Checks ===")
print(f"Max slew violations: {metrics.get('design__max_slew_violation__count')}")
print(f"Max fanout violations: {metrics.get('design__max_fanout_violation__count')}")
print(f"Max capacitance violations: {metrics.get('design__max_cap_violation__count')}")
print(f"Design violations: {metrics.get('design__violations')}")
print(f"Route DRC errors: {metrics.get('route__drc_errors')}")
print(f"Magic DRC errors: {metrics.get('magic__drc_error__count')}")
print(f"KLayout DRC errors: {metrics.get('klayout__drc_error__count')}")
print(f"Antenna violations: {metrics.get('route__antenna_violation__count')}")
print(f"Antenna violating nets: {metrics.get('antenna__violating__nets')}")
print(f"Antenna violating pins: {metrics.get('antenna__violating__pins')}")

print("\n=== Routing Complexity ===")
print(f"Estimated wirelength: {metrics.get('route__wirelength__estimated')}")
print(f"Final wirelength: {metrics.get('route__wirelength')}")
print(f"Max wirelength: {metrics.get('route__wirelength__max')}")
print(f"Vias: {metrics.get('route__vias')}")
print(f"Nets: {metrics.get('route__net')}")
print(f"Special nets: {metrics.get('route__net__special')}")

print("\n=== Power ===")
print(f"Internal power: {metrics.get('power__internal__total')}")
print(f"Switching power: {metrics.get('power__switching__total')}")
print(f"Leakage power: {metrics.get('power__leakage__total')}")
print(f"Total power: {metrics.get('power__total')}")

print("\n=== LVS / Signoff ===")
print(f"XOR differences: {metrics.get('design__xor_difference__count')}")
print(f"LVS errors: {metrics.get('design__lvs_error__count')}")
print(f"LVS device differences: {metrics.get('design__lvs_device_difference__count')}")
print(f"LVS net differences: {metrics.get('design__lvs_net_difference__count')}")
print(f"LVS unmatched devices: {metrics.get('design__lvs_unmatched_device__count')}")
print(f"LVS unmatched nets: {metrics.get('design__lvs_unmatched_net__count')}")
print(f"LVS unmatched pins: {metrics.get('design__lvs_unmatched_pin__count')}")