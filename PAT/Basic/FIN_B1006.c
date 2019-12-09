#include <stdio.h>

int main()
{
    int n;
    int arr[3] = {0};
    char str[9] = "123456789";
    scanf("%d",&n);
    for(int i = 0; i < 3; i++) {
        arr[i] = n%10;
        n/=10;
    }
    for (int j = 2; j >= 0; j--){
        switch (j)
        {
        case 2:
            for (int k = 0; k < arr[j]; k++) printf("B");
            break;
        case 1:
            for (int k = 0; k < arr[j]; k++) printf("S");
            break;
        case 0:
            for (int k = 0; k < arr[j]; k++) printf("%c",str[k]);
            break;
        }
    }
}

