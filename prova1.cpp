#include<bits/stdc++.h>

int main() {
    int x=1;
    while(x<=12){
        if(x==1 || x==3 || x==5 || x==6 || x==8 || x==10 || x==12){
            for(int i=1; i<=31; i++){
                printf("%d/%d/2021 ", i, x);
            }
        }
        else if(x==2){
            for(int i=1; i<=28; i++){
                printf("%d/%d/2021 ", i, x);
            }
        }
        else{
            for(int i=1; i<=30; i++){
                printf("%d/%d/2021 ", i, x);
            }
        }
        x++;
    }

    return 0;
}
