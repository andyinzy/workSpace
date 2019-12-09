/**
 * 读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10
​100
​​ 。

输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
*/

#include <stdio.h>

int main()
{
    char a[100] = {};
    scanf("%s",a);
    int sum = 0;
    for (int i = 0; i < 100; i++) {
        if (a[i]) sum += (a[i] - '0');
    }
    int b[3] = {};
    for (int i = 0; i < 3; i ++){
        b[i] = sum % 10;
        sum/=10;
    }
    int t = 3;
    while(t--){
        if (!b[t] && t == 2) continue;
        if (!b[t] && t == 1 && !b[2]) continue;
        switch (b[t]) {
            case 1:printf("yi");break;
            case 2:printf("er");break;
            case 3:printf("san");break;
            case 4:printf("si");break;
            case 5:printf("wu");break;
            case 6:printf("liu");break;
            case 7:printf("qi");break;
            case 8:printf("ba");break;
            case 9:printf("jiu");break;
            case 0:printf("ling");break;
        }
        if (t>0) printf(" ");
    }
    return 0;
}

/**
 * while (t--)是真的好用
 * 尤其是控制最后输出位置没有空格的情况下
 * /