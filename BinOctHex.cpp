#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
		
	int Libre;
	char sale[16];
	system("cls");
	system("color 3");
	printf("\n\n\t Digite Valor : \n\t\t");
	scanf("%d",&Libre);
	while(Libre!=0){
		if(Libre>5)
			system("color fc");
		else
			system("color D");
			
	itoa(Libre,sale,2);
	printf("\n\t\t~Binario= %s",sale);
	printf("\n\t\t~Octal= %o",Libre);
	printf("\n\t\t~Hexadecimal: %x",Libre);
	Sleep(500);
	Beep(500,1000);
	printf("\n\n\t Digite Valor : \n\t\t");
	scanf("%d",&Libre);
}	
		return(0);
	
	}


