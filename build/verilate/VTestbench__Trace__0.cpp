// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestbench__Syms.h"


void VTestbench___024root__trace_chg_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_chg_0\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTestbench___024root__trace_chg_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_chg_0_sub_0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.Testbench__DOT__rst));
        bufp->chgIData(oldp+1,(vlSelfRef.Testbench__DOT__multiplicand),32);
        bufp->chgIData(oldp+2,(vlSelfRef.Testbench__DOT__multiplier),32);
        bufp->chgBit(oldp+3,(vlSelfRef.Testbench__DOT__start));
        bufp->chgIData(oldp+4,(vlSelfRef.Testbench__DOT__seed),32);
        bufp->chgBit(oldp+5,((1U & (~ (IData)(vlSelfRef.Testbench__DOT__rst)))));
        bufp->chgIData(oldp+6,(vlSelfRef.Testbench__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+7,(vlSelfRef.Testbench__DOT__error));
        bufp->chgIData(oldp+8,(vlSelfRef.Testbench__DOT__judge__DOT__multiplicand_reg),32);
        bufp->chgIData(oldp+9,(vlSelfRef.Testbench__DOT__judge__DOT__multiplier_reg),32);
    }
    bufp->chgBit(oldp+10,(vlSelfRef.Testbench__DOT__clk));
    bufp->chgQData(oldp+11,(vlSelfRef.Testbench__DOT__mul__DOT__product_reg),64);
    bufp->chgBit(oldp+13,(vlSelfRef.Testbench__DOT__mul__DOT__finish_reg));
    bufp->chgIData(oldp+14,(vlSelfRef.Testbench__DOT__mul__DOT__multiplicand_reg),32);
    bufp->chgCData(oldp+15,(vlSelfRef.Testbench__DOT__mul__DOT__fsm_state_reg),2);
    bufp->chgCData(oldp+16,(vlSelfRef.Testbench__DOT__mul__DOT__work_cnt),5);
    bufp->chgQData(oldp+17,((0x1ffffffffULL & ((QData)((IData)(
                                                               (vlSelfRef.Testbench__DOT__mul__DOT__product_reg 
                                                                >> 0x20U))) 
                                               + (QData)((IData)(vlSelfRef.Testbench__DOT__mul__DOT__multiplicand_reg))))),33);
}

void VTestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_cleanup\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
