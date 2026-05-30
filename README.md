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
* `OpenLane 2` - ASIC RTL-to-GDS flow
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

## Toolchain Setup
### OpenLane Configuration
## Useful Commands

## Multiplier Results
### Default Multiplication
### Binary Multiplication
### Radix-4 Multiplication

## References
* Check out Cal Poly's CARP [website](https://cal-poly-ramp.github.io/) for more information and resources: 
