#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	int b;
	int v1;
	int v2;
	int v3;
	
	system("cls");
	system("color E4");
	printf("\n\n\t Digite el valor de A: \n\t\t");
	scanf("%d",&a);
	printf("\n\n\t Digite el valor de B: \n\t\t");
	scanf("%d",&b);
	v1=a&b;
	v2=a|b;
	v3=v1^v2;
	printf("\n\tSalida circuito=: %d\n",v3);
	Beep(1000,500);
	Sleep(3000);
	while(v3<100){
		system("cls");
		system("color fc");
		while(v3<100&&v3>50){
		
		system("cls");
		system("color E4");
		printf("\n\n\t Digite el valor de A: \n\t\t");
		scanf("%d",&a);
		printf("\n\n\t Digite el valor de B: \n\t\t");
		scanf("%d",&b);
		v1=a&b;
		v2=a|b;
		v3=v1^v2;
		printf("\n\tSalida circuito=: %d\n",v3);
		Beep(1000,500);
	}
		printf("\n\n\t Digite el valor de A: \n\t\t");
		scanf("%d",&a);
		printf("\n\n\t Digite el valor de B: \n\t\t");
		scanf("%d",&b);
		v1=a&b;
		v2=a|b;
		v3=v1^v2;
		printf("\n\tSalida circuito=: %d\n",v3);
		Beep(1000,500);

	
	}
	
	return(0);
}
