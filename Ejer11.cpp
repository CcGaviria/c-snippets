#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
      int Vel = 0;
      int Versal;
      
      printf("introduzca un valor:  ");
      scanf("&d",&Vel);
      Versal=(Vel*1000/3600);
      printf ("%d \n",Versal);
      
      system ("pause");
      return 0;
      }
