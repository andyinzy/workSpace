#include <stdio.h>

int main()
{
    int m,n,sum,sum_abs;
    scanf("%d %d", &m, &n);
    sum = m+n;
    sum_abs = (sum>=0) ? sum : -1*sum;
    if(sum_abs>=1000000){
        if ((sum_abs % 1000) == 0) printf("%d,%d,000\n",(sum / 1000000),(sum_abs / 1000));
        else printf("%d,%d,%d\n",(sum / 1000000),(sum_abs / 1000),(sum_abs % 1000));
    } else if (sum_abs<1000000 && sum_abs>=1000) {
        if ((sum_abs % 1000) == 0) printf("%d,000\n",(sum / 1000));
        else printf("%d,%d\n",(sum / 1000),(sum_abs % 1000));
    } else {
        printf("%d\n", sum);
    }
    return 0;
}

/*
Sample Input:
-1000000 9
Sample Output:
-999,991
*/