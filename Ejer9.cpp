#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    
    int J=2;
    int S=0;
    int N;
    
    printf("Introduzca Un Valor :");
    scanf("%d",&N);
    
    while (J <= N/2){
          S=S+1;
          J=J+1;
          }
    if (S==0){
             printf("Es Primo \n");
             }
    else{
         printf("No Es Primo \n");
         }
    
    system("pause");
    return  0;  
    

    }
