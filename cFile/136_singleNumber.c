#include <stdlib.h>
#include <stdio.h>

int singleNumber(int* nums, int numsSize){
    int a = 0;
    for (int i=0;i<numsSize;i++) {
        a = a ^ nums[i];
    }
    return a;
}

int main(){
    int array_1[5] = {7,1,2,1,2};
    int array_2[9] = {2,5,6,6,5,4,1,2,4};
    printf("res:%d",singleNumber(array_2, 9));
}