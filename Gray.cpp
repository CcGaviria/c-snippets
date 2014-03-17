#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
	int x,y;
	char Libre[16];
	system("cls");
	system("color E1");
	for(x=0;x<26;x++){
		y=x>>1;
		y=x^y;
		itoa(y,Libre,2);
		printf("\n\t %d= \t %s",x,Libre);
		Sleep(500);
	}
	return(0);
}
