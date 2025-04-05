// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench___024root.h"

VL_ATTR_COLD void VTestbench___024root___eval_initial__TOP(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_initial(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTestbench___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VTestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 
        = vlSelfRef.Testbench__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__rst__0 
        = vlSelfRef.Testbench__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__mul__DOT__finish_reg__0 
        = vlSelfRef.Testbench__DOT__mul__DOT__finish_reg;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__clk = 0U;
    vlSelfRef.Testbench__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                         15);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__rst = 0U;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 3U;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 4U;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 5U;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 6U;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 7U;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 8U;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 9U;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 0xbU;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 0xcU;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 0xdU;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 0xeU;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 0xfU;
    vlSelfRef.Testbench__DOT__start = 1U;
    vlSelfRef.Testbench__DOT__multiplicand = VL_RANDOM_I();
    vlSelfRef.Testbench__DOT__multiplier = VL_RANDOM_I();
    co_await vlSelfRef.__VtrigSched_haa81d3e7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.mul.finish_reg)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__start = 0U;
    vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i = 0x10U;
    VL_WRITEF_NX("success!!!\n",0);
    VL_FINISH_MT("/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 26, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                             nullptr, 
                                             "/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 
                                             30);
        vlSelfRef.Testbench__DOT__clk = (1U & (~ (IData)(vlSelfRef.Testbench__DOT__clk)));
    }
}

void VTestbench___024root___eval_act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VTestbench___024root___nba_sequent__TOP__0(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__1(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__3(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__4(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__5(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__6(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_nba(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_nba\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__6(vlSelf);
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__Testbench__DOT__mul__DOT__work_cnt 
        = vlSelfRef.Testbench__DOT__mul__DOT__work_cnt;
    vlSelfRef.__Vdly__Testbench__DOT__mul__DOT__product_reg 
        = vlSelfRef.Testbench__DOT__mul__DOT__product_reg;
    if ((0U == (IData)(vlSelfRef.Testbench__DOT__mul__DOT__fsm_state_reg))) {
        vlSelfRef.__Vdly__Testbench__DOT__mul__DOT__work_cnt = 0x1fU;
        vlSelfRef.__Vdly__Testbench__DOT__mul__DOT__product_reg 
            = (QData)((IData)(vlSelfRef.Testbench__DOT__multiplier));
        vlSelfRef.Testbench__DOT__mul__DOT__multiplicand_reg 
            = vlSelfRef.Testbench__DOT__multiplicand;
    } else if ((1U == (IData)(vlSelfRef.Testbench__DOT__mul__DOT__fsm_state_reg))) {
        vlSelfRef.__Vdly__Testbench__DOT__mul__DOT__work_cnt 
            = (0x1fU & ((IData)(vlSelfRef.Testbench__DOT__mul__DOT__work_cnt) 
                        - (IData)(1U)));
        vlSelfRef.__Vdly__Testbench__DOT__mul__DOT__product_reg 
            = ((1U & (IData)(vlSelfRef.Testbench__DOT__mul__DOT__product_reg))
                ? VL_SHIFTR_QQI(64,64,32, (((QData)((IData)(
                                                            ((IData)(
                                                                     (vlSelfRef.Testbench__DOT__mul__DOT__product_reg 
                                                                      >> 0x20U)) 
                                                             + vlSelfRef.Testbench__DOT__mul__DOT__multiplicand_reg))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.Testbench__DOT__mul__DOT__product_reg))), 1U)
                : VL_SHIFTR_QQI(64,64,32, vlSelfRef.Testbench__DOT__mul__DOT__product_reg, 1U));
    } else {
        vlSelfRef.__Vdly__Testbench__DOT__mul__DOT__product_reg 
            = vlSelfRef.Testbench__DOT__mul__DOT__product_reg;
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> VTestbench__ConstPool__TABLE_h86f156c1_0;
extern const VlUnpacked<CData/*1:0*/, 512> VTestbench__ConstPool__TABLE_hdb26bb3f_0;

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__1(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__1\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__Vdly__Testbench__DOT__mul__DOT__fsm_state_reg 
        = vlSelfRef.Testbench__DOT__mul__DOT__fsm_state_reg;
    __Vtableidx1 = (((IData)(vlSelfRef.Testbench__DOT__mul__DOT__work_cnt) 
                     << 4U) | (((IData)(vlSelfRef.Testbench__DOT__start) 
                                << 3U) | (((IData)(vlSelfRef.Testbench__DOT__mul__DOT__fsm_state_reg) 
                                           << 1U) | (IData)(vlSelfRef.Testbench__DOT__rst))));
    if (VTestbench__ConstPool__TABLE_h86f156c1_0[__Vtableidx1]) {
        vlSelfRef.__Vdly__Testbench__DOT__mul__DOT__fsm_state_reg 
            = VTestbench__ConstPool__TABLE_hdb26bb3f_0
            [__Vtableidx1];
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__2\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.Testbench__DOT__error))) {
        VL_WRITEF_NX("fail!!!\n",0);
        VL_FINISH_MT("/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 69, "");
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__3(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__3\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__mul__DOT__work_cnt = vlSelfRef.__Vdly__Testbench__DOT__mul__DOT__work_cnt;
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__5(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__5\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__mul__DOT__product_reg 
        = vlSelfRef.__Vdly__Testbench__DOT__mul__DOT__product_reg;
    if ((0U == (IData)(vlSelfRef.Testbench__DOT__mul__DOT__fsm_state_reg))) {
        vlSelfRef.Testbench__DOT__mul__DOT__finish_reg = 0U;
    } else if ((1U != (IData)(vlSelfRef.Testbench__DOT__mul__DOT__fsm_state_reg))) {
        if ((2U == (IData)(vlSelfRef.Testbench__DOT__mul__DOT__fsm_state_reg))) {
            vlSelfRef.Testbench__DOT__mul__DOT__finish_reg = 1U;
        }
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__6(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__6\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__mul__DOT__fsm_state_reg 
        = vlSelfRef.__Vdly__Testbench__DOT__mul__DOT__fsm_state_reg;
}

void VTestbench___024root___timing_resume(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_resume\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_haa81d3e7__0.resume(
                                                   "@(posedge Testbench.mul.finish_reg)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VTestbench___024root___timing_commit(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_commit\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_haa81d3e7__0.commit(
                                                   "@(posedge Testbench.mul.finish_reg)");
    }
}

void VTestbench___024root___eval_triggers__act(VTestbench___024root* vlSelf);

bool VTestbench___024root___eval_phase__act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTestbench___024root___eval_triggers__act(vlSelf);
    VTestbench___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTestbench___024root___timing_resume(vlSelf);
        VTestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTestbench___024root___eval_phase__nba(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__nba\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTestbench___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__nba(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG

void VTestbench___024root___eval(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VTestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/d/sysI/sys1-sp25/src/lab3-3/sim/testbench.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTestbench___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTestbench___024root___eval_debug_assertions(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_debug_assertions\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
