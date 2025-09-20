// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul_tb.h for the primary calling header

#include "Vmul_tb__pch.h"
#include "Vmul_tb__Syms.h"
#include "Vmul_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul_tb___024root___dump_triggers__act(Vmul_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmul_tb___024root___eval_triggers__act(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_triggers__act\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmul_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
