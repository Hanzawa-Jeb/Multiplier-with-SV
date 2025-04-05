// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench__Syms.h"
#include "VTestbench___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG

void VTestbench___024root___eval_triggers__act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_triggers__act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((~ (IData)(vlSelfRef.Testbench__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.Testbench__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.Testbench__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.Testbench__DOT__mul__DOT__finish_reg) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__mul__DOT__finish_reg__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 
        = vlSelfRef.Testbench__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__rst__0 
        = vlSelfRef.Testbench__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__mul__DOT__finish_reg__0 
        = vlSelfRef.Testbench__DOT__mul__DOT__finish_reg;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VTestbench___024unit____Vdpiimwrap_mul_judge_TOP____024unit(IData/*31:0*/ multiplicand, IData/*31:0*/ multiplier, QData/*63:0*/ product, IData/*31:0*/ &mul_judge__Vfuncrtn);

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__4(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__4\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_mul_judge__0__Vfuncout;
    __Vfunc_mul_judge__0__Vfuncout = 0;
    // Body
    if (vlSelfRef.Testbench__DOT__rst) {
        vlSelfRef.Testbench__DOT__error = 0U;
    } else if (vlSelfRef.Testbench__DOT__mul__DOT__finish_reg) {
        vlSelfRef.Testbench__DOT__error = (1U != ([&]() {
                    VTestbench___024unit____Vdpiimwrap_mul_judge_TOP____024unit(vlSelfRef.Testbench__DOT__judge__DOT__multiplicand_reg, vlSelfRef.Testbench__DOT__judge__DOT__multiplier_reg, vlSelfRef.Testbench__DOT__mul__DOT__product_reg, __Vfunc_mul_judge__0__Vfuncout);
                }(), __Vfunc_mul_judge__0__Vfuncout));
    }
    if (vlSelfRef.Testbench__DOT__rst) {
        vlSelfRef.Testbench__DOT__judge__DOT__multiplicand_reg = 0U;
        vlSelfRef.Testbench__DOT__judge__DOT__multiplier_reg = 0U;
    } else if (vlSelfRef.Testbench__DOT__start) {
        vlSelfRef.Testbench__DOT__judge__DOT__multiplicand_reg 
            = vlSelfRef.Testbench__DOT__multiplicand;
        vlSelfRef.Testbench__DOT__judge__DOT__multiplier_reg 
            = vlSelfRef.Testbench__DOT__multiplier;
    }
}
