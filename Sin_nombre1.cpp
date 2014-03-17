#include <stdio.h>

int main () {
	int A [4][4];
	int n=1;
	int i, k; {
	i=0;
	while(i<4){
		k=0;
		while(k<4){
			A[i][k]=n;
			n=n+1;
			k=k+1;
		}
		i=i+1;
	}
	i=0;
	while(i<4){
		printf("\n");
		k=0;
		while(k<4){
			printf("\t%d",A[i][k]);
			k=k+1;
		}
		i=i+1;
	
	}
	
	
}
	
}
