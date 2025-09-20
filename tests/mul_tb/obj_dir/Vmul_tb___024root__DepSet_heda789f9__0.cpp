// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul_tb.h for the primary calling header

#include "Vmul_tb__pch.h"
#include "Vmul_tb___024root.h"

VL_ATTR_COLD void Vmul_tb___024root___eval_initial__TOP(Vmul_tb___024root* vlSelf);
VlCoroutine Vmul_tb___024root___eval_initial__TOP__Vtiming__0(Vmul_tb___024root* vlSelf);

void Vmul_tb___024root___eval_initial(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_initial\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmul_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vmul_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vmul_tb___024root___eval_initial__TOP__Vtiming__0(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0;
    IData/*31:0*/ __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0;
    // Body
    vlSelfRef.mul_tb__DOT__A = 0U;
    vlSelfRef.mul_tb__DOT__B = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 0xbU;
    VL_WRITEF_NX("Test Complete\n",0);
    VL_FINISH_MT("mul_tb.sv", 48, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vmul_tb___024root___eval_act(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_act\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmul_tb___024root___eval_nba(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_nba\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmul_tb___024root___timing_resume(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___timing_resume\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmul_tb___024root___eval_triggers__act(Vmul_tb___024root* vlSelf);

bool Vmul_tb___024root___eval_phase__act(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_phase__act\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmul_tb___024root___eval_triggers__act(vlSelf);
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
            VL_FATAL_MT("mul_tb.sv", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("mul_tb.sv", 1, "", "Active region did not converge.");
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
