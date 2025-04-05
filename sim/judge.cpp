#include <svdpi.h>
#include <stdio.h>

extern "C" unsigned int mul_judge(
    unsigned long long multiplicand, 
    unsigned long long multiplier,
    unsigned long long product
) {
    int right = 0;
    unsigned long long simulate_result = (unsigned long long)multiplicand * (unsigned long long)multiplier;

    if (simulate_result == product) {
        right = 1;
    }

    if (!right) {
        printf("*********error***********\n");
        printf("simulation multiplicand = %016llu, multiplier = %016llu, product = %016llu\n",
               multiplicand, multiplier, simulate_result);
        printf("hardware   multiplicand = %016llu, multiplier = %016llu, product = %016llu\n",
               multiplicand, multiplier, product);
    } else {
        printf("simulation multiplicand = %016llu, multiplier = %016llu, product = %016llu\n",
               multiplicand, multiplier, simulate_result);
    }

    return right;
}