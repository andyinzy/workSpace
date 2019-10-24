#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    long long a_val,b_val,c_val;
    int arr[10];
    memset(arr,-1,sizeof(arr));
    scanf("%d",&T);
    for (int i = 0; i < T; i++) {
        scanf("%lld %lld %lld", &a_val, &b_val, &c_val);
        if (a_val + b_val > c_val) arr[i] = 1;
        else arr[i] = 0;
    }
    for (int i = 0; i < T; i++) {
        if (arr[i] == 1) printf("Case #%d: true\n", i+1);
        else if (arr[i] == 0) printf("Case #%d: false\n", i+1);
    }
    return 0;
}

/*
 * 注意，2^31 超过int的范围了，必须要用long long, scanf相应地用lld
 * memset前添加string.h
*/