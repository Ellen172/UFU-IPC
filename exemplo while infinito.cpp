#include <stdio.h>

main() {

    int i=0;

    while(i < 10){
        printf("%d ", i);
        break;
        //mesmo sem incemento o break encerra o programa, por isso o i só é impresso uma vez;
    }

    return 0;
}
