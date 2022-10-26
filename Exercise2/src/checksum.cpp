#include <iostream>
#include <stdio.h>
using namespace std;

unsigned int digitsum(unsigned int N){
    unsigned int r;
    unsigned int sum = 0;
    while(N != 0){
        r = N % 10;
        sum = r + sum;
        N = N / 10;
    }
    return sum;
}

unsigned int checksum(unsigned int N){
    unsigned int r;
    int i = 0;
    unsigned int sum = 0;
    while(N != 0){
        r = N % 10;
        
        if(i%2 != 0){
            r = 2 * r;
            if(r>9){
                r = digitsum(r);
            }
        }
        sum = r + sum;
        N = N / 10;
        i++;
    }
    return sum;
}