import cocotb
from cocotb.clock import Clock
from cocotb.triggers import (
    RisingEdge, 
)

@cocotb.test()
async def bin_mult_coco(dut):
    
    cocotb.start_soon(Clock(dut.CLK, 13, units='ns').start())

    # Reset
    dut.A.value = 0
    dut.B.value = 0
    dut.rst_n.value = 0
    await RisingEdge(dut.CLK)
    dut.rst_n.value = 1
    await RisingEdge(dut.CLK)



