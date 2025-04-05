// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTESTBENCH__DPI_H_
#define VERILATED_VTESTBENCH__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /mnt/d/sysI/sys1-sp25/src/lab3-3/sim/judge.v:2:29
    extern int mul_judge(unsigned int multiplicand, unsigned int multiplier, unsigned long long product);

#ifdef __cplusplus
}
#endif

#endif  // guard
