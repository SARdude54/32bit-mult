// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul_tb.h for the primary calling header

#include "Vmul_tb__pch.h"
#include "Vmul_tb__Syms.h"
#include "Vmul_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmul_tb___024root___eval_initial__TOP__Vtiming__0(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0;
    IData/*31:0*/ __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0;
    IData/*31:0*/ __Vtask_mul_tb__DOT__send_and_check__0__expected;
    __Vtask_mul_tb__DOT__send_and_check__0__expected = 0;
    // Body
    vlSelfRef.mul_tb__DOT__A = 0U;
    vlSelfRef.mul_tb__DOT__B = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "mul_tb.sv", 
                                         50);
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 1U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 2U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 3U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 4U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 5U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 6U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 7U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 8U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 9U;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__B_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__A_test = 0xaU;
    __Vtask_mul_tb__DOT__send_and_check__0__expected 
        = (__Vtask_mul_tb__DOT__send_and_check__0__A_test 
           * __Vtask_mul_tb__DOT__send_and_check__0__B_test);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         32);
    vlSelfRef.mul_tb__DOT__A = __Vtask_mul_tb__DOT__send_and_check__0__A_test;
    vlSelfRef.mul_tb__DOT__B = __Vtask_mul_tb__DOT__send_and_check__0__B_test;
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         37);
    co_await vlSelfRef.__VtrigSched_h9a7718c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         38);
    co_await vlSelfRef.__VtrigSched_h9a771883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mul_tb.CLK)", 
                                                         "mul_tb.sv", 
                                                         39);
    if (VL_UNLIKELY(((vlSelfRef.mul_tb__DOT__C != __Vtask_mul_tb__DOT__send_and_check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: mul_tb.sv:42: Assertion failed in %Nmul_tb.send_and_check: [%0t] Mismatch: A=%0# B=%0# C=%0# exp=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__A_test,
                     32,__Vtask_mul_tb__DOT__send_and_check__0__B_test,
                     32,vlSelfRef.mul_tb__DOT__C,32,
                     __Vtask_mul_tb__DOT__send_and_check__0__expected);
        VL_STOP_MT("mul_tb.sv", 42, "");
    }
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    vlSelfRef.mul_tb__DOT__unnamedblk1__DOT__i = 0xbU;
    VL_WRITEF_NX("Test Complete\n",0);
    VL_FINISH_MT("mul_tb.sv", 59, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul_tb___024root___dump_triggers__act(Vmul_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmul_tb___024root___eval_triggers__act(Vmul_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_tb___024root___eval_triggers__act\n"); );
    Vmul_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.mul_tb__DOT__CLK) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mul_tb__DOT__CLK__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.mul_tb__DOT__CLK)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mul_tb__DOT__CLK__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__mul_tb__DOT__CLK__0 
        = vlSelfRef.mul_tb__DOT__CLK;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmul_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
