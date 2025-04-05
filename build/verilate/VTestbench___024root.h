// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VTestbench___024unit;


class VTestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTestbench___024root final : public VerilatedModule {
  public:
    // CELLS
    VTestbench___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ Testbench__DOT__clk;
    CData/*0:0*/ Testbench__DOT__rst;
    CData/*0:0*/ Testbench__DOT__start;
    CData/*0:0*/ Testbench__DOT__error;
    CData/*1:0*/ Testbench__DOT__mul__DOT__fsm_state_reg;
    CData/*4:0*/ Testbench__DOT__mul__DOT__work_cnt;
    CData/*4:0*/ __Vdly__Testbench__DOT__mul__DOT__work_cnt;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Testbench__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Testbench__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ Testbench__DOT__multiplicand;
    IData/*31:0*/ Testbench__DOT__multiplier;
    IData/*31:0*/ Testbench__DOT__i;
    IData/*31:0*/ Testbench__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ Testbench__DOT__mul__DOT__multiplicand_reg;
    IData/*31:0*/ Testbench__DOT__mul__DOT__high_product;
    IData/*31:0*/ Testbench__DOT__mul__DOT__low_product;
    IData/*31:0*/ Testbench__DOT__judge__DOT__multiplicand_reg;
    IData/*31:0*/ Testbench__DOT__judge__DOT__multiplier_reg;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ Testbench__DOT__mul__DOT__product_reg;
    QData/*63:0*/ __Vdly__Testbench__DOT__mul__DOT__product_reg;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestbench___024root(VTestbench__Syms* symsp, const char* v__name);
    ~VTestbench___024root();
    VL_UNCOPYABLE(VTestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
