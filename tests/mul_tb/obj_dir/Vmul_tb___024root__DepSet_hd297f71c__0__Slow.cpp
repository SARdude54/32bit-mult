// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul_tb.h for the primary calling header

#include "Vmul_tb__pch.h"
#include "Vmul_tb__Syms.h"
#include "Vmul_tb___024root.h"

VL_ATTR_COLD void Vmul_tb___024root___eval_initial__TOP(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_initial__TOP\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mul_tb__DOT__CLK = 0U;
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
}
