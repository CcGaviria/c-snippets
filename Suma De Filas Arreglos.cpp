#include <stdio.h>

void Fn_SumaF();
int A[4][4]={6,8,9,1,5,3,2,5,7,7,3,4,5,8,9,1};
int i=0,j=0;
int ValorF,NV5=0;

int main(){
	i=0;
	while(i<4){
		if(A[i][j]==5)
		NV5=NV5+1;
	}

	
while (i<4){
	ValorF=0;
	j=0;
	while(j<4){
		ValorF=ValorF+A[i][j];
		j=j+1;
	}
	printf ("Fila %d Suma %d \n",i,ValorF);
	i=i+1;
	
}
}




