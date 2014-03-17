#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int A=0;
    int B=0;
    int Temporal=0;
    
    printf("Introduzca Un Valor Para A:");
    scanf("%d",&A);
    printf("Introduzca Un Valor Para B:");
    scanf("%d",&B);
    if(A<B){
            Temporal=B;
            B=A;
            A=Temporal;
            
    printf ("El Orden es %d, %d\n",B,A);
}
    else{
          Temporal=A;
          A=B;
          B=Temporal;
    printf ("El Orden es %d, %d\n",A,B);
}

    system("pause");
    return  0;  
    

    
    
    
    }
