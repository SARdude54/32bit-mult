import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import (
    RisingEdge, 
    ClockCycles
)
from cocotb.binary import BinaryValue

LATENCY = 2

# genertes random 32-bit numbers
def gen_random_test_val():
    A = random.getrandbits(32)
    B = random.getrandbits(32)
    C = A * B
    return A, B, C

# resets DUT
async def reset_dut(dut, cycles = 2):
    dut.A.value = 0
    dut.B.value = 0
    dut.rst_n.value = 0
    await ClockCycles(dut.CLK, cycles)
    dut.rst_n.value = 1
    await ClockCycles(dut.CLK, 1)

# reference product
def ref_mul(a, b):
    return (a & 0xFFFFFFFF) * (b & 0xFFFFFFFF) & 0xFFFFFFFFFFFFFFFF

# Checks if has X or Z value
def is_known(value: BinaryValue) -> bool:
    # return false if X or Z is present
    return value.is_resolvable

@cocotb.test()
async def X_Z_check_test(dut):
    cocotb.start_soon(Clock(dut.CLK, 10, units='ns').start())
    await reset_dut(dut)

    await RisingEdge(dut.CLK)

    dut.A.value = 6
    dut.B.value = 7
    await ClockCycles(dut.CLK, LATENCY)
    assert is_known(dut.C.value), f"C contains X or Z: {dut.C.value.binstr}"

@cocotb.test()
async def simple_test(dut):
    
    cocotb.start_soon(Clock(dut.CLK, 10, units='ns').start())
    await reset_dut(dut)

    await RisingEdge(dut.CLK)

    A = 6
    B = 7

    dut.A.value = A
    dut.B.value = B

    await ClockCycles(dut.CLK, LATENCY)

    got= int(dut.C.value)
    expected = ref_mul(A, B)

    assert got == expected, f"3*7: got 0x{got:016x}, exp {expected:016x}"

