// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul_tb.h for the primary calling header

#include "Vmul_tb__pch.h"
#include "Vmul_tb___024root.h"

VL_ATTR_COLD void Vmul_tb___024root___eval_initial__TOP(Vmul_tb___024root* vlSelf);
VlCoroutine Vmul_tb___024root___eval_initial__TOP__Vtiming__0(Vmul_tb___024root* vlSelf);
VlCoroutine Vmul_tb___024root___eval_initial__TOP__Vtiming__1(Vmul_tb___024root* vlSelf);
VlCoroutine Vmul_tb___024root___eval_initial__TOP__Vtiming__2(Vmul_tb___024root* vlSelf);

void Vmul_tb___024root___eval_initial(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_initial\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmul_tb___024root___eval_initial__TOP(vlSelf);
    Vmul_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmul_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vmul_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__mul_tb__DOT__CLK__0 
        = vlSelfRef.mul_tb__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vmul_tb___024root___eval_initial__TOP__Vtiming__0(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mul_tb__DOT__A = 0U;
    vlSelfRef.mul_tb__DOT__B = 0U;
    vlSelfRef.mul_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         41);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         42);
    vlSelfRef.mul_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         44);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         45);
}

VL_INLINE_OPT VlCoroutine Vmul_tb___024root___eval_initial__TOP__Vtiming__2(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "mul_tb.sv", 
                                             24);
        vlSelfRef.mul_tb__DOT__CLK = (1U & (~ (IData)(vlSelfRef.mul_tb__DOT__CLK)));
    }
}

void Vmul_tb___024root___eval_act(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_act\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmul_tb___024root___nba_sequent__TOP__0(Vmul_tb___024root* vlSelf);

void Vmul_tb___024root___eval_nba(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_nba\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmul_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vmul_tb___024root___nba_sequent__TOP__0(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___nba_sequent__TOP__0\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.mul_tb__DOT__rst_n) {
        vlSelfRef.mul_tb__DOT__C = (vlSelfRef.mul_tb__DOT__mul__DOT__a_q 
                                    * vlSelfRef.mul_tb__DOT__mul__DOT__b_q);
        vlSelfRef.mul_tb__DOT__mul__DOT__a_q = vlSelfRef.mul_tb__DOT__A;
        vlSelfRef.mul_tb__DOT__mul__DOT__b_q = vlSelfRef.mul_tb__DOT__B;
    } else {
        vlSelfRef.mul_tb__DOT__C = 0U;
        vlSelfRef.mul_tb__DOT__mul__DOT__a_q = 0U;
        vlSelfRef.mul_tb__DOT__mul__DOT__b_q = 0U;
    }
}

void Vmul_tb___024root___timing_resume(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___timing_resume\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h9a7718c2__0.resume(
                                                   "@(posedge mul_tb.CLK)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h9a771883__0.resume(
                                                   "@(negedge mul_tb.CLK)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmul_tb___024root___timing_commit(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___timing_commit\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h9a7718c2__0.commit(
                                                   "@(posedge mul_tb.CLK)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h9a771883__0.commit(
                                                   "@(negedge mul_tb.CLK)");
    }
}

void Vmul_tb___024root___eval_triggers__act(Vmul_tb___024root* vlSelf);

bool Vmul_tb___024root___eval_phase__act(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_phase__act\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmul_tb___024root___eval_triggers__act(vlSelf);
    Vmul_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmul_tb___024root___timing_resume(vlSelf);
        Vmul_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmul_tb___024root___eval_phase__nba(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_phase__nba\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmul_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul_tb___024root___dump_triggers__nba(Vmul_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul_tb___024root___dump_triggers__act(Vmul_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmul_tb___024root___eval(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmul_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("mul_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmul_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("mul_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmul_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmul_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmul_tb___024root___eval_debug_assertions(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_debug_assertions\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
