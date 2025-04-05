#include <svdpi.h>
#include <stdio.h>

extern "C" unsigned int mul_judge (
    unsigned int multiplicand, 
    unsigned int multiplier,
    unsigned long long int product
){
    
    int right = 0;
    unsigned long long simulate_result = (unsigned long long)multiplicand * multiplier;

    if (simulate_result == product) {
        right = 1;
    }

    if(!right){
        printf("*********error***********\n");
        printf("simulation multiplicand = %08ud, multiplier = %08ud, product = %016lld\n", multiplicand, multiplier, simulate_result);
        printf("hardware   multiplicand = %08ud, multiplier = %08ud, product = %016lld\n", multiplicand, multiplier, product);
    }else{
        printf("simulation multiplicand = %08ud, multiplier = %08ud, product = %016lld\n", multiplicand, multiplier, simulate_result);
    }

    return right;
}
