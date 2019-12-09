#include <stdio.h>

int main()
{
    char arr[1000];
    int arr_times[10] = {0};
    scanf("%s", arr);
    int digit = 0;
    for (int i = 0; i < 1000; i++) {
        if (arr[i]) digit++;
        else break;
    }
    for (int j = 0; j < digit; j++) {
        arr_times[arr[j]-'0']++;
    }
    for (int k = 0; k <= 9; k++) {
        if (arr_times[k]) printf("%d:%d\n", k, arr_times[k]);
    }
}

