# Analysis Of 32-bit ASIC Multipliers Using Open-Source EDA Tools

This project implements different 32-bit multiplier algorithms in digital design and will analyze metrics using open-source EDA tools.

Currently, this project has three different implementations:

* Default `*` operator in SystemVerilog
* Binary Multiplication
* Radix-4 Multiplication

## Toolchain

* `Verilator` - Fast RTL simulation and linting
* `Icarus Verilog` - 4-state RTL simulation
* `CocoTB` - Python-based HDL verification
* `Yosys` - RTL synthesis
* `OpenLane 2` - ASIC RTL-to-GDSII flow
* `OpenSTA` - Static timing analysis, included through OpenLane
* `OpenROAD` - Place-and-route, included through OpenLane
* `GTKWave` or `Surfer` - Waveform viewing (Either works well)

Recommended to use Python3.10+, git, and Ubuntu.

This project implements and verifies a 32-bit radix-4 multiplier in SystemVerilog, then runs it through an open-source ASIC flow using OpenLane 2 and the SkyWater SKY130 PDK.

## Project Structure for Each Multiplier Folder

* `config.json` - Synthesis Config File          
* `Makefile`             
* `rtl/` - Where all RTL lives                  
    * `radix4_mult.sv`
    * `counter.sv`
* `tests/` - System Verilog Testbenches               
    * `tb_radix4_mult/` - Main Testbench
* `cocotests/` - CocoTB tests if needed           
* `scripts/` - Helpful automation scripts             
* `runs/` - OpenLane Results              

Currently, this project is organized as three separate multiplier implementations:

```text
def_mult/   # RTL-inferred SystemVerilog '*' multiplier
bin_mult/   # Binary shift-and-add multiplier
radix4/     # Radix-4 Booth multiplier
```


## Toolchain Setup

### Host-System Requirements

The project required to be run on an Ubuntu Linux-baed machine using GNU Make. 

Install common dependencies:

```bash
sudo apt update
sudo apt install -y \
    build-essential \
    git \
    make \
    findutils \
    coreutils \
    python3 \
    python3-pip \
    python3-venv \
    python3-dev \
    verilator \
    iverilog \
    gtkwave
```

Verify the installed RTL tools:

```bash
verilator --version
iverilog -V
vvp -V
python3 --version
make --version
```

### Python Environment and cocotb

Create a Python virtual environment from the repository root:

```bash
python3 -m venv .venv
source .venv/bin/activate
```

Install the Python dependencies used by cocotb and the result-processing scripts:

```bash
python3 -m pip install --upgrade pip
python3 -m pip install cocotb matplotlib
```

Verify the cocotb installation:

```bash
cocotb-config --version
```

Activate the environment before running cocotb tests or Python data-analysis scripts:

```bash
source .venv/bin/activate
```

Deactivate the environment when finished:

```bash
deactivate
```

### OpenLane and OpenROAD

This project invokes OpenLane using the Classic flow interface:

```bash
openlane --flow Classic config.json
```

OpenLane provides the RTL-to-GDSII ASIC flow and uses tools including Yosys, OpenROAD, OpenSTA, Magic, KLayout, and the SkyWater SKY130 PDK.

Enter the OpenLane environment before running physical-design commands. For a Nix-based installation, this is typically done from the OpenLane installation directory:

```bash
nix-shell --pure shell.nix
```

Verify that OpenLane and OpenROAD are available:

```bash
openlane --version
openroad -version
```

> Keep the OpenLane installation outside this repository. The multiplier repository should contain project RTL, configurations, scripts, and saved flow results rather than a local copy of the ASIC toolchain.

### Set `PDKPATH`

The Makefile passes `PDKPATH` as an include path during linting and uses it for gate-level simulation. The OpenROAD Tcl loader also uses it, when provided, to locate the Sky130A PDK Liberty timing models.

Set `PDKPATH` to the root of the installed Sky130A PDK:

```bash
export PDKPATH=/path/to/sky130A
```

For example, a Volare-based installation may look similar to:

```bash
export PDKPATH="$HOME/.volare/volare/sky130/versions/<version>/sky130A"
```

Confirm that it is set:

```bash
echo "$PDKPATH"
```

To persist this variable between terminal sessions, add it to `~/.bashrc`:

```bash
echo 'export PDKPATH=/path/to/sky130A' >> ~/.bashrc
source ~/.bashrc
```

Replace `/path/to/sky130A` with the actual local PDK installation path.

### Verify the Full Toolchain

From a multiplier directory, such as `radix4/`, run:

```bash
verilator --version
iverilog -V
cocotb-config --version
openlane --version
openroad -version
echo "$PDKPATH"
```

A successful result from each tool and a non-empty `PDKPATH` indicate that the required environment is available.

## Common Makefile Commands

Run the following commands from one multiplier directory:

```bash
cd radix4
```

### RTL Linting

Run Verilator linting on all RTL files:

```bash
make lint
```

Lint a specific top-level module:

```bash
make lint_top TOP_MODULE=<module_name> TOP_FILE=<rtl_file>
```

Example:

```bash
make lint_top TOP_MODULE=radix4_mult TOP_FILE=rtl/radix4_mult.sv
```

### RTL Simulation

Run all SystemVerilog tests using Verilator, the default simulator:

```bash
make tests
```

The default `make` target performs both linting and RTL simulation:

```bash
make
```

Run the same SystemVerilog tests using Icarus Verilog:

```bash
make itests
```

This invokes:

```bash
ICARUS=1 make tests
```

Use both simulators when practical:

* **Verilator** is the default fast simulator and linter.
* **Icarus Verilog** provides event-driven, four-state simulation and can expose initialization or unknown-value behavior not visible in a two-state simulation flow.

### CocoTB Tests

Run all cocotb test directories:

```bash
make cocotests
```

Activate the Python environment first:

```bash
source ../.venv/bin/activate
make cocotests
```

When invoked from a multiplier directory, the virtual environment is expected to be located one directory above it in the repository root.

### OpenLane ASIC Flow

Run OpenLane using the default configuration file:

```bash
make openlane
```

The Makefile uses:

```bash
openlane --flow Classic config.*
```

To run a specific configuration file explicitly:

```bash
make config.json
```

or:

```bash
make config.yaml
```

OpenLane writes its artifacts to the local `runs/` directory. After a successful flow, the Makefile updates:

```text
runs/recent
```

to point to the newest generated run directory.

For reproducible experiments, record the exact timestamped run directory rather than relying only on `runs/recent`.

### Gate-Level Simulation

Once the multiplier design has completed through the flow (or at the very least passed an openlane run), a gate-level netlist will be generated. This is a verilog file of your design using only standard cell gates.

It can be found in the `pnl` folder of your final results. Look in `runs/recent/final/pnl/`

Note: this must be run on Icarus Verilog because Verilator does not support certain gate-level features (as far as I know). 

Run gate-level simulation against the most recent post-layout netlist:

```bash
make gl_tests
```

### OpenROAD GUI

Launch OpenROAD and load the most recent finalized OpenLane result:

```bash
make openroad
```

This is equivalent to:

```bash
RUN_DIR=runs/recent openroad -gui scripts/openroad_load.tcl
```

The Tcl loader automatically:

* locates the final OpenDB database and SDC constraints;
* finds the Sky130 HD Liberty timing model;
* attempts to load extracted SPEF parasitics;
* reports worst setup and hold slack;
* prints the top setup and hold timing paths;
* opens the OpenROAD GUI.

Open a specific historical run:

```bash
make openroad RUN_DIR=runs/RUN_YYYY-MM-DD_HH-MM-SS
```

Use a different timing Liberty corner:

```bash
make openroad LIB_CORNER=sky130_fd_sc_hd__tt_025C_1v80.lib
```

By default, the Tcl loader uses:

```text
sky130_fd_sc_hd__ss_100C_1v60.lib
```

This slow process, high-temperature, low-voltage corner is appropriate for inspecting setup-critical paths.

### Clean Generated Simulation Files

Remove generated test waveforms, simulation binaries, logs, and Verilator build directories:

```bash
make clean
```

This removes generated files under the local `tests/` directory, including:

```text
*.vcd
*.log
a.out
obj_dir/
```


### Data Collection

1. Use `collect_metrics.py` to parse through an openlane run and gather essential metrics. 

* Default run on a single run:
    ```python3 scripts/collect_metrics.py runs/recent```

    or 

    ```    
    python3 scripts/collect_metrics.py \
        --design default:def_mult/runs/recent \
        --design radix4:radix4/runs/recent \
        --design bin_mult:bin_mult/runs/recent \
        --out-csv results/metrics_summary.csv \
        --out-json results/metrics_summary.json
    ```

    * Use `--name default_mul` to label which multiplication algorithm
    * Use `--summary` to write a summary after writing CSV or JSON


2. Use `plot_metrics.py` to plot `collect_metrics.py` results 
    ```
    python3 scripts/plot_metrics.py results/metrics_summary.csv
    ```

    * Use `--out-dir` to specifify output directory. Defaults to `results/plots`
    * Use ```--format``` to specify output format. Only PDF, PNG, or SVG. 
        * For example: 
            ```
            python3 scripts/plot_metrics.py results/metrics_summary.csv \
            --out-dir paper/figures \
            --format pdf
            ```
    * Use `--dpi` sets the resolution used for raster format. Dedfaults to 300
        * For example:

            ```
            python3 scripts/plot_metrics.py results/metrics_summary.csv \
            --format png \
            --dpi 600
            ```

## Debugging
### Debugging Antenna Violations

Use `antenna_debug.py` to review antenna violation information for debugging. 

* Default Run:

    ```
    python3 scripts/antenna_debug.py runs/<RUN>
    ```

    Writes report to default path: `runs/<RUN>/antenna_debug_summary.txt`
* Use `--show-clean` to include steps where antenna violations are zero. This can be useful to show a timeline of where violaions appeared or repaired. 

* Use `--net <NET>` to report around a specific net
    * Ex: `python3 scripts/antenna_debug.py runs/RUN_2026-06-17_21-29-12 --net _01566_` will only include antenna reports that mention `_01566_`, Additionally, it will also mention the net-context section searches for `_01566_` in DEF, Verilog, and antenna logs.


* Use `--out <DIR>` to write the report to a specific directory. 



## Multiplier Results
### Default Multiplication
### Binary Multiplication
### Radix-4 Multiplication

## References
* Check out Cal Poly's CARP [website](https://cal-poly-ramp.github.io/) for more information and resources: 
