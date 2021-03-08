#include <bits/stdc++.h>

int main() {
   int X, j=914;
   inicio: printf("Digite um numero:");
   scanf("%d", &X);
   if(X>4&&X<200){
     for(int i=226; i < j;i++){
       if(i%X==0){
         printf("%d\n", i);
       }
     }
   } else {
     printf("Numero não válido !! Digite um número maior que 4 e menor 200\n "); goto inicio;
   }

    return 0;
}
