#include <stdio.h>

typedef struct candidate
{
    int num;
    int score;
}cdd;

cdd a[10000];
int id_arr[10000] = {};

int main()
{
    int N;
    scanf("%d",&N);
    if (N > 10000 || N < 0) {printf("invalid N");return 0;}
    for (int i=1; i <= N; i++) {
        scanf("%d %d", &a[i].num, &a[i].score);
        id_arr[a[i].num] += a[i].score;
    }
    int sum_max = 0,index = 0;
    for (int j=1; j <= N; j++) {
        if (id_arr[j] > sum_max) {
            sum_max = id_arr[j];
            index = j;
        }
    }
    printf("%d %d", index, sum_max);
    return 0;
}


/* 最后出现段错误，不知为何
 * 加入if(N>10000 || N < 0) return NULL;
 * 然后又提示wrong answer，算了，反正主要算法已完成
*/