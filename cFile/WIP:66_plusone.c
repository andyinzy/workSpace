/*给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。

最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。

你可以假设除了整数 0 之外，这个整数不会以零开头。

输入: [1,2,3]
输出: [1,2,4]
解释: 输入数组表示数字 123。

输入: [4,3,2,1]
输出: [4,3,2,2]
解释: 输入数组表示数字 4321。
*/
#include <stdlib.h>
#include <stdio.h>

#define bool int
#define true 1
#define false 0

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    //digitsSize = sizeof(digits) / 4;
    bool plusDigit = true;
    while (plusDigit) {
        if (*(digits + digitsSize)==9) {
            *(digits + digitsSize) = 0;
            if (digitsSize<=0)
            digitsSize--;
        } else {
            *(digits + digitsSize) += 1;
            plusDigit = false;
        }
    }
    return digits;
}

void print_digit(int* arr)
{
    for (int i=0;i<(sizeof(arr)/sizeof(int));i++){
        printf("arr:%d\n",arr[i]);
    }
}

int main(){
    int array_1[3] = {3,2,1};
    int array_2[4] = {4,3,2,1};
    int num_1 = (sizeof(array_1)/sizeof(int));
    printf("%d\n",num_1);
    plusOne(array_1, num_1-1 , array_1);
    print_digit(array_1);
}