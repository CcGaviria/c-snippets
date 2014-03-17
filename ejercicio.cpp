#include <stdio.h>
#include <stdlib.h>

#define CERO 0 

int main () {
	int A [4][4];
	int n=0;
	int i, k; {
	i=CERO;
	while(i<4){
		k=0;
		while(k<4){
			A[i][k]=n;
			n=n+1;
			k=k+1;
		}
		i=i+1;
	}
	i=CERO;
	while(i<4){
		printf("\n");
		k=0;
		while(k<4){
			printf("\t%d",rand()%11);
			k=k+1;
		}
		i=i+1;
	
	}
	
	
}
system ("pause");
return 0;
	
}
