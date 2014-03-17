#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

int main(){
    
    int R=0;
    int H=0;
    int Vol;
    int Area;
    
    printf ("Introduzca Un Valor Para El Radio: ");
    scanf("%d",&R);
    printf ("Introduzca Un Valor Para La Altura: ");
    scanf("%d",&H);
    Vol=(PI*pow(R,0.5)*H);
    Area=(2*PI*R*H);
    printf("\nEl Valor De Volumen Es Igual A: %d ",Vol);
    printf("\nEl Valor Del Area Es Igual A: %d \n",Area);
    
    system ("pause");
    return 0;
    
    
    
    }
