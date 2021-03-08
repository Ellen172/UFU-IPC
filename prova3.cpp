#include <bits/stdc++.h>

int main() {
    int a, b, c, aux;
    scanf("%d %d %d", &a, &b, &c);

    if(b<a){
        aux=a; a=b; b=aux;
    }

    for(int i=a; i<=b; i++){
        if(i%c==0){
            printf("%d\n", i);
        }
    }

    return 0;
}
