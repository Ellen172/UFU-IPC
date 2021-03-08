#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, d, l, r, c, chave=1;
    int navio[15][15];

    for(int i=0; i<15; i++){
        for(int j=0; j<15; j++){
            navio[i][j]=0;
        }
    }

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d %d %d", &d, &l, &r, &c);

        if(d==0){
            if(c+l>10 || c<1 || r<1){
                chave=0;
            }
            for(int i=c; i<c+l; i++){
                navio[r][i]++;
            }
        }

        else if(d==1){
            if(r+l>10 || c<1 || r<1){
                chave=0;
            }
            for(int i=r; i<r+l; i++){
                navio[i][c]++;
            }
        }
    }

    if(chave==0){
        printf("N\n");
    }

    else {
        for(int i=1; i<=10; i++){
            for(int j=1; j<=10; j++){
                if(navio[i][j]>1){
                    printf("N\n");
                    return 0;
                }
            }
        }

        printf("Y\n");
    }

    return 0;
}
