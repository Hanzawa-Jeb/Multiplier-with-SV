// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench___024root.h"

VL_ATTR_COLD void VTestbench___024root___eval_static__TOP(VTestbench___024root* vlSelf);
VL_ATTR_COLD void VTestbench___024root____Vm_traceActivitySetAll(VTestbench___024root* vlSelf);

VL_ATTR_COLD void VTestbench___024root___eval_static(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_static\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTestbench___024root___eval_static__TOP(vlSelf);
    VTestbench___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VTestbench___024root___eval_static__TOP(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_static__TOP\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__seed = 0U;
    vlSelfRef.Testbench__DOT__mul__DOT__finish_reg = 0U;
}

VL_ATTR_COLD void VTestbench___024root___eval_final(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_final\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__stl(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTestbench___024root___eval_phase__stl(VTestbench___024root* vlSelf);

VL_ATTR_COLD void VTestbench___024root___eval_settle(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_settle\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VTestbench___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTestbench___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__stl(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___dump_triggers__stl\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestbench___024root___stl_sequent__TOP__0(VTestbench___024root* vlSelf);

VL_ATTR_COLD void VTestbench___024root___eval_stl(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_stl\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VTestbench___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VTestbench___024root___stl_sequent__TOP__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___stl_sequent__TOP__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__mul__DOT__add_result 
        = (0x1ffffffffULL & ((QData)((IData)((vlSelfRef.Testbench__DOT__mul__DOT__product_reg 
                                              >> 0x20U))) 
                             + (QData)((IData)(vlSelfRef.Testbench__DOT__mul__DOT__multiplicand_reg))));
}

VL_ATTR_COLD void VTestbench___024root___eval_triggers__stl(VTestbench___024root* vlSelf);

VL_ATTR_COLD bool VTestbench___024root___eval_phase__stl(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__stl\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTestbench___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VTestbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___dump_triggers__act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge Testbench.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge Testbench.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge Testbench.rst)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge Testbench.mul.finish_reg)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__nba(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___dump_triggers__nba\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge Testbench.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge Testbench.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge Testbench.rst)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge Testbench.mul.finish_reg)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestbench___024root____Vm_traceActivitySetAll(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root____Vm_traceActivitySetAll\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void VTestbench___024root___ctor_var_reset(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___ctor_var_reset\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->Testbench__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__multiplicand = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__multiplier = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__seed = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__error = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->Testbench__DOT__mul__DOT__multiplicand_reg = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__mul__DOT__product_reg = VL_RAND_RESET_Q(64);
    vlSelf->Testbench__DOT__mul__DOT__fsm_state_reg = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__mul__DOT__work_cnt = VL_RAND_RESET_I(5);
    vlSelf->Testbench__DOT__mul__DOT__finish_reg = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__mul__DOT__add_result = VL_RAND_RESET_Q(33);
    vlSelf->Testbench__DOT__judge__DOT__multiplicand_reg = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__judge__DOT__multiplier_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__Testbench__DOT__mul__DOT__fsm_state_reg = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__Testbench__DOT__mul__DOT__work_cnt = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__Testbench__DOT__mul__DOT__product_reg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__mul__DOT__finish_reg__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
