#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
int main(){
		int x[100000],i;
		time_t tinicio,tfinal;
		system("cls");
		system("color 1E");
		srand(time(NULL));
		tinicio=time(NULL);
		for(i=0;i<100000;i++)
			x[i]=1+rand()%15000;
		for(i=0;i<100000;i++)
				printf("\t\n%d\t",x[i]);
			tfinal=time(NULL);
			printf("\n\t Duracion= %f segundos\n",difftime(tfinal,tinicio));
			Sleep(2000);
			return(0);
		}
		
