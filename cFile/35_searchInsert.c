#include <stdlib.h>
#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target)
{
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] >= target)return i;
        else {
            if (i>=numsSize-1) {
                return i+1;
            }
        }
    }
    return numsSize;
}

void main(){
    int array_1[4] = {1,3,5,6};
    int array_2[6] = {1,3,5,6,7,8};
    int a = searchInsert(array_2, 6, 10);
    printf("a=%d\n",a);
}
/*给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

你可以假设数组中无重复元素。

示例 :

输入: [1,3,5,6], 5
输出: 2

输入: [1,3,5,6], 2
输出: 1

输入: [1,3,5,6], 7
输出: 4

输入: [1,3,5,6], 0
输出: 0
*/