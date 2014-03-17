#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	float CatA;
	float CatB;
	float Hip;
	printf ("Introduzca un valor para el CatA: ");
	scanf("%f",&CatA);
	printf ("Introduzca un valor para el CatB: ");
	scanf("%f",&CatB);
	Hip=sqrt(CatA*CatA+CatB*CatB);
	printf ("La Hipotenusa Del CatA mas el CatB es igual a: %f\n",Hip);
	system ("pause");
	return 0;
}
