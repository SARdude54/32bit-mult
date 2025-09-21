// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmul_tb.h for the primary calling header

#ifndef VERILATED_VMUL_TB___024ROOT_H_
#define VERILATED_VMUL_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmul_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmul_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mul_tb__DOT__CLK;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mul_tb__DOT__CLK__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ mul_tb__DOT__A;
    IData/*31:0*/ mul_tb__DOT__B;
    IData/*31:0*/ mul_tb__DOT__C;
    IData/*31:0*/ mul_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
    IData/*31:0*/ mul_tb__DOT__mul__DOT__a_q;
    IData/*31:0*/ mul_tb__DOT__mul__DOT__b_q;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9a771883__0;
    VlTriggerScheduler __VtrigSched_h9a7718c2__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmul_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmul_tb___024root(Vmul_tb__Syms* symsp, const char* v__name);
    ~Vmul_tb___024root();
    VL_UNCOPYABLE(Vmul_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
