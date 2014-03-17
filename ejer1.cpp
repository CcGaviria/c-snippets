#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int b;
    printf("Introduzca Un Valor Para a: ");
    scanf("%d",&a);
    printf("Introduzca Un Valor Para b: ");
    scanf("%d",&b);
    if (a==b) {
    printf ("los valores son iguales\n");
    printf("Introduzca Un Valor Para a: ");
    scanf("%d",&a);
    printf("Introduzca Un Valor Para b: ");
    scanf("%d",&b); 
    if (a>b)
    printf ("A Es El Mayor\n");
    else
    printf ("B, Es El Mayor\n");
	}
    else
    if (a>b)
    printf ("A Es El Mayor\n");
    else
    printf ("B, Es El Mayor\n");
    system("pause");
     return 0;

   
    
}
