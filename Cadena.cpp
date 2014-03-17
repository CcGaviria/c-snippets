#include <stdio.h>
#include <string.h>

int Nveces=0;
int Numecar;

int main () {
	char A [10];
	char *t;
	char *v;
	printf("\nDigite una cadena de caracteres: ");
	gets(A) ;
	t=A;
	strcat(t,"bonita");
	Numecar = strlen(A);
	strcpy (v, t);
	printf("\n", t,v);
	while (*t){
	 if (*t == 'i')
	        Nveces=Nveces+1;
	t++;
    }
    if (Nveces==0)
    printf("\n Si hay una i");
    else 
    printf("\n La i esta %d veces", Nveces);

/*
	printf("\nLa cadena a traves del apuntador es: %s", t);
	t++;
	printf("\nLa cadena a traves del apuntador es: %s", t);
	
}
*/
}

