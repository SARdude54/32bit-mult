import random
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles, ReadOnly, ReadWrite



def to_s32(x: int) -> int:
    x &= 0xFFFFFFFF
    return x - 0x100000000 if (x & 0x80000000) else x

def ref_mul_s32(a: int, b: int) -> int:
    """
    
    Signed 32x32 -> 64 two's complement reference, returned as 64-bit pattern.
    
    """
    
    # product signed int
    prod = to_s32(a) * to_s32(b)

    # keep 64-bit two's complement bit pattern          
    return prod & 0xFFFFFFFFFFFFFFFF



def has_xz(val) -> bool:
    """
    
    True if any X/Z in the signal.
    
    """
    s = val.binstr.lower()
    return ("x" in s) or ("z" in s)


async def reset_sync_active_low(dut, cycles: int = 2):
    """

    Synchronous reset: drive rst_n low, wait some rising edges,
    then deassert rst_n high on a clock edge.

    """
    # Default handhsake signals
    dut.vld_in.value = 0
    dut.rdy_out.value = 0
    dut.A.value = 0
    dut.B.value = 0

    dut.rst_n.value = 0
    await ClockCycles(dut.CLK, cycles)
    await RisingEdge(dut.CLK)
    dut.rst_n.value = 1
    await RisingEdge(dut.CLK)


async def start_op(dut, a: int, b: int):
    """

    Wait for rdy_in, then set inputs and pulse vld_in for 1 cycle.

    """
    # Wait until DUT is ready to accept new input
    while int(dut.rdy_in.value) == 0:
        await RisingEdge(dut.CLK)

    dut.A.value = a & 0xFFFFFFFF
    dut.B.value = b & 0xFFFFFFFF

    dut.vld_in.value = 1
    await RisingEdge(dut.CLK)
    dut.vld_in.value = 0



async def wait_result(dut):
    while int(dut.vld_out.value) == 0:
        await RisingEdge(dut.CLK)

    # lets DUT update here, can still write after
    await ReadWrite()  

    if has_xz(dut.C.value):
        raise AssertionError(f"C contains X/Z: {dut.C.value.binstr}")

    got = int(dut.C.value)

    dut.rdy_out.value = 1
    await RisingEdge(dut.CLK)
    dut.rdy_out.value = 0
    return got




@cocotb.test()
async def simple_radix4_smoke(dut):
    """

    Simple test:
      - reset
      - two directed multiplies

    """
    # 10ns period = 100MHz
    cocotb.start_soon(Clock(dut.CLK, 10, units="ns").start())

    await reset_sync_active_low(dut, cycles=4)

    # Test 1: 100 * 100
    a = 100
    b = 100
    exp = ref_mul_s32(a, b)

    await start_op(dut, a, b)
    got = await wait_result(dut)

    assert got == exp, (
        f"Test1 mismatch: A={a} B={b} got=0x{got:016x} exp=0x{exp:016x}"
    )

    # Test 2: 3423 * 1123
    a = 3423
    b = 1123
    exp = ref_mul_s32(a, b)

    await start_op(dut, a, b)
    got = await wait_result(dut)

    assert got == exp, (
        f"Test2 mismatch: A={a} B={b} got=0x{got:016x} exp=0x{exp:016x}"
    )

    # Test with random
    rng = random.Random(0xD0D0)
    for i in range(20):
        a = rng.getrandbits(32)
        b = rng.getrandbits(32)
        exp = ref_mul_s32(a, b)

        await start_op(dut, a, b)
        got = await wait_result(dut)

        assert got == exp, (
            f"[{i}] mismatch: A=0x{a:08x} B=0x{b:08x} got=0x{got:016x} exp=0x{exp:016x}"
        )
