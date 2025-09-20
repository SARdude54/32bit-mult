// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul_tb.h for the primary calling header

#include "Vmul_tb__pch.h"
#include "Vmul_tb__Syms.h"
#include "Vmul_tb___024root.h"

void Vmul_tb___024root___ctor_var_reset(Vmul_tb___024root* vlSelf);

Vmul_tb___024root::Vmul_tb___024root(Vmul_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmul_tb___024root___ctor_var_reset(this);
}

void Vmul_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmul_tb___024root::~Vmul_tb___024root() {
}
