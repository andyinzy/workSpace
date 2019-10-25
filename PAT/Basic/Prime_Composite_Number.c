#include <stdio.h>
#include <math.h>

/**
 * 思路1)：因此判断一个整数m是否是素数，
 * 只需把 m 被 2 ~ m-1 之间的每一个整数去除，如果都不能被整除，那么 m 就是一个素数。
 * 太麻烦，简单粗暴的方法
 *
 * 思路1)：m 不必被 2 ~ m-1 之间的每一个整数去除，
 * 只需被 2 ~ power(m,1/2) 之间的每一个整数去除就可以了。如果 m 不能被 2 ~ power(m,1/2) 间任一整数整除，m 必定是素数。
 * sqrt(double type) 返回 double type
 *
 * 注意：
 * 质数是大于一的自然数
*/

/* 求质数 */
int primeNum(int n)
{
    int tmp = (int)sqrt((double)n);
    for (int i = 2; i < tmp; i++) {
        if (!(n%i)) {
            printf("not prime number\n");
            return 0;
        }
    }
    printf("it's prime number");
}

/* 求合数 */
// void compositeNum()
// {

// }

int main()
{
    primeNum(103);
    return 0;
}

