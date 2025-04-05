#include <svdpi.h>
#include <stdio.h>

extern "C" unsigned int mul_judge (
    unsigned int multiplicand, 
    unsigned int multiplier,
    unsigned long long int product
){
    
    int right = 0;
    int simulate_result = product;

    if (multiplicand * multiplier == product) {
        right = 1;
    }

    if(!right){
        printf("*********error***********\n");
        printf("simulation multiplicand = %08x, multiplier = %08x, product = %016llx\n", multiplicand, multiplier, simulate_result);
        printf("hardware   multiplicand = %08x, multiplier = %08x, product = %016llx\n", multiplicand, multiplier, product);
    }else{
        printf("simulation multiplicand = %08x, multiplier = %08x, product = %016llx\n", multiplicand, multiplier, simulate_result);
    }

    return right;
}
