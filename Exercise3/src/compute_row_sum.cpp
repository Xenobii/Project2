#include <iostream>
#include <stdio.h>
using namespace std;

template<int N, int M>
void compute_row_sum(short a[N][M], short row_sum[N]){
    for(int i=0; i < N; i++){
        for(int j=0; j < M; j++){
            row_sum[i] = a[i][j] + row_sum[i];
        }
    }
}