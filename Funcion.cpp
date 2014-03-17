#include <stdio.h>

void Fn_SumaFila(int);
void Fn_VeriUni();
void Fn_SumaCol();

int Fn_MayorNumero();
int A[4][4]={6,28,9,1,5,3,2,5,7,7,3,4,5,8,21,1};
int i,j;
int NV5=0;
int ValorF,Uni,SW,ValorC;
int FilaMV=0;
int MenorValor,FilaMeV=0;
int ColuMV,ColuMeV;

int main(){
	int R;
    int MayorValor;	
	i=0;
	while(i<4){
		j=0;
		while (j<4){
			if (A[i][j]==5)
			NV5=NV5+1;
			j=j+1;
	    }0
	    i=i+1;	
    }
    printf("\n-Cuantas Veces Aparece El Numero 5 En El Arreglo?");
    printf("\n\n*El 5 Aparece %d Veces.\n",NV5);
    R=Fn_MayorNumero();
    printf("\n-El mayor valor encontrado es: %d \n",R);
    Fn_SumaFila(MayorValor);
}

void Fn_SumaFila(int MayorValor){ 
	printf ("\n-Resultado De Filas:\n\n");
	MayorValor=0;
	MenorValor=99;
	
	i=0;
	
    while (i<4){
	    ValorF=0;
	    j=0;
	    while(j<4){
		    ValorF=ValorF+A[i][j];
		    j=j+1;
		}
		printf ("*Fila %d Suma %d. \n",i,ValorF);
		if(ValorF>MayorValor){
		   MayorValor=ValorF;
    	   FilaMV=i;
		   		   
		}
		if(ValorF<MenorValor){
		   MenorValor=ValorF;
    	   FilaMeV=i;		   
		}
		
    
	    i=i+1;
    }
    printf("\n*Fila de mayor valor =%d",FilaMV);
    printf("\n*Fila de menor valor =%d",FilaMeV);
    Fn_VeriUni();
}

void Fn_VeriUni(){
	printf ("\n\n-La diagonal es unitaria?: ");
	i=0;
	while (i<4){
		if (A[i][i]==1)
		    SW=1;
		else{
			SW=0;
			i=3;
		}
		i=i+1;
   }
	if (SW==1)
	    printf("*\nSi\n\n");
	else
	    printf("\n*No\n\n");
    
	    
	Fn_SumaCol();
}

void Fn_SumaCol(){
	printf ("\n-Resultado De Columnas: \n\n");
	int MayorValor=0;
	int MenorValor=99;

    j=0;
	i=0;
	
    while (i<4){
	    ValorC=0;
	    j=0;
	    while(j<4){
		    ValorC=ValorC+A[j][i];
		    j=j+1;
		}
		printf ("*Columna %d Suma %d. \n",i,ValorC);
	    if(ValorC>MayorValor){
		   MayorValor=ValorC;
    	   ColuMV=i;		   
		}
		if(ValorC<MenorValor){
		   MenorValor=ValorC;
    	   ColuMeV=i;		   
		}
		
    
	    i=i+1;
    }
    printf("\n*Columna de mayor valor =%d",ColuMV);
    printf("\n*Columna de menor valor =%d",ColuMeV);
}
int Fn_MayorNumero() {
	int MayorNu,k;
	i=0;
	while(i<4){
		k=0;
		while(k<4){
		if(A[i][k]>MayorNu)
		MayorNu=A[i][k];
		k=k+1;
	}
	i=i+1;
}
return MayorNu;
}
