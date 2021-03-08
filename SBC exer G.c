#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, c, x, a = 100 , max = 100;

    scanf("%d", &c);

    for (i = 0; i < c; i++){
        scanf("%d",&x);
        a += x;

        if(a > max){
            max = a;
        }
    }

    printf("%d", max);

    return 0;
}
