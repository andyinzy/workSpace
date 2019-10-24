#include <stdio.h>

int main()
{
    int x;
    int times = 0;
    scanf("%d",&x);
    while(x>1){
        if (!(x%2)){
            x/=2;
            times++;
        } else {
            x = (3 * x + 1)/2;
            times++;
        }
    }
    return times;
}

