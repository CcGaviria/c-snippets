#include <stdio.h>
#include <stdlib.h>  

int main(){ 
     
    int N;  
    printf("Ingresa tu nota: ");  
    scanf("%d",&N);
    if(N == 19 || N == 20){  
    printf("Tu nota es A\n");  
    }
    else{  
        if(N <= 18 && N >= 16){  
        printf("Tu nota es B\n");  
        }
        else{  
        if(N <= 15 && N >= 13){  
        printf("Tu nota es C\n");  
        }
        else{  
            if(N <= 12 && N >= 10){  
            printf("Tu nota es D\n");  
            }
            else{  
            if(N <= 9 && N >= 1){  
            printf("Tu nota es E\n");  
            }  
            else{  
            printf("Fuera de rango (0-20)\n");  
            }  
            }  
        }  
        }  
    }  
   system ("pause");
   return 0;  
}  
