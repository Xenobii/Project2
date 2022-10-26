#include <iostream>
#include <stdio.h>
using namespace std;

unsigned int checksum(unsigned int N);

unsigned int sum_check(){
    unsigned int test_numbers[] = {12, 34, 80, 3561};
    unsigned int test_sums[] = {4, 10, 7, 15};
    short int i = 0;
    short int flag = 0;

    //idk why but size() doesn't work in linux for me
    while(i < end(test_numbers) - begin(test_numbers)&&flag==0){  
        if(checksum(test_numbers[i])!=test_sums[i]){
            flag = 1;
        }
        i++;
    } 
    return flag;
}

int main(){
    if (sum_check()==1){
        cout << "Error in code!" << endl;
    }
    else{
        cout << "Successful code!" << endl;
    }
    return 0;
}