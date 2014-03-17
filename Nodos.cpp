#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include <time.h>

void Fn_Carlista(); 
void Fn_ListaLis();

#define Asigna (struct nodo*)malloc(sizeof(struct nodo))

int i;
struct nodo {
	int Dato;
	struct nodo *Sig;
};
struct nodo *p;
struct nodo *q;
main(){
	Fn_Carlista();
	Fn_ListaLis();
}

void Fn_Carlista(){
	srand(time(NULL));
	p=NULL;
	i=1;
	while(i<8){
		q=Asigna;
		q->Dato=rand()%10;
		q->Sig=p;
		p=q;
		i=i+1;
	}
}
void Fn_ListaLis(){
	system("cls");
	i=1;
	while(i<8){
		printf("\n -Dato %d es:  %d\n\n",i,q->Dato);
		q=q->Sig;
		i=i+1;
	}
	system("pause");
}

