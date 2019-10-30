#include <stdio.h>

int main()
{
    char str[80];
    int arr[80];
    int index_num = 0, len = 0;
    scanf("%s", str);
    for (int i = 0; i < 80; i++) {
        if (str[i]==' ') {
            arr[index_num] = i;
            index_num++;
        }
        if (str[i]) len++;
        else break;
    }
    // for (int i = k; i < k++; i = k) {
    // }
    if (!index_num) {
        printf("%s", str);
        return 0;
    } else {
        for (int k = index_num; k > 0; k--) {
            for (int j = arr[k-1]; j < len; j++) {
                printf("%c",str[j]);
            }
            if (!(k-1)) {
                for (int i = 0; i < arr[k])
            }
            len = index_num;       
        }
            
        }
    }

}

