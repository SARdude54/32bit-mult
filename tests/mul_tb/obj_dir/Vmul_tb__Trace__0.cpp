// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmul_tb__Syms.h"


void Vmul_tb___024root__trace_chg_0_sub_0(Vmul_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmul_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root__trace_chg_0\n"); );
    // Init
    Vmul_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmul_tb___024root*>(voidSelf);
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmul_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmul_tb___024root__trace_chg_0_sub_0(Vmul_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root__trace_chg_0_sub_0\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.mul_tb__DOT__C),32);
        bufp->chgIData(oldp+1,(vlSelfRef.mul_tb__DOT__mul__DOT__a_q),32);
        bufp->chgIData(oldp+2,(vlSelfRef.mul_tb__DOT__mul__DOT__b_q),32);
        bufp->chgIData(oldp+3,((vlSelfRef.mul_tb__DOT__mul__DOT__a_q 
                                * vlSelfRef.mul_tb__DOT__mul__DOT__b_q)),32);
    }
    bufp->chgBit(oldp+4,(vlSelfRef.mul_tb__DOT__CLK));
    bufp->chgIData(oldp+5,(vlSelfRef.mul_tb__DOT__A),32);
    bufp->chgIData(oldp+6,(vlSelfRef.mul_tb__DOT__B),32);
    bufp->chgIData(oldp+7,(vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+8,(vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
}

void Vmul_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root__trace_cleanup\n"); );
    // Init
    Vmul_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmul_tb___024root*>(voidSelf);
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
