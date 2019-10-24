#include <stdio.h>

int main()
{
    char a[100];

    printf("%d",scanf("%s",a));
    for (int i = 0; i < 100; i++) {
        printf("%d",a[i]);
    }
    return 0;
}

