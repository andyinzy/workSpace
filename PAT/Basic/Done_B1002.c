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