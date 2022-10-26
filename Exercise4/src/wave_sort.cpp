#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void wave_sort(int arr[], int n){
    int i, j, k;
    for(i=0; i < n - 1; i++){
        for(j = 0; j<n - i - 1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(k=0;k < n;k++){
        if(k%2!=0){
            swap(arr[k], arr[k-1]);
        }
    }
}