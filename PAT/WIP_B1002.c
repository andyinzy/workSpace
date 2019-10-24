#include <stdio.h>

int main()
{
    char a[100] = {};

    printf("%d\n",scanf("%s",a));
    int sum = 0;
    for (int i = 0; i < 100; i++) {
        if (a[i]) sum += (a[i] - '0');
    }
    printf("%d\n",sum);
    int b[3] = {};
    for (int i = 0; i < 3; i ++){
        b[i] = sum % 10;
        sum/=10;
    }
    for (int j = 2; j >= 0; j--) {
        if (!b[2] || (!b[2]&&!b[1])) continue;
        switch (b[j]) {
            case 1:printf("yi ");break;
            case 2:printf("er ");break;
            case 3:printf("san ");break;
            case 4:printf("si ");break;
            case 5:printf("wu ");break;
            case 6:printf("liu ");break;
            case 7:printf("qi ");break;
            case 8:printf("ba ");break;
            case 9:printf("jiu ");break;
            case 0:printf("lin ");break;
        }
    }

    // printf("%d",sum);
    // for (int i = 0; i < 20; i++) {
    //     printf("%d\n",a[i]);
    //     if (a[i] == 0) printf("equal '0' i:%c\n",i);
    // }

    return 0;
}



