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
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ mul_tb__DOT__A;
    IData/*31:0*/ mul_tb__DOT__B;
    IData/*31:0*/ mul_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ mul_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
