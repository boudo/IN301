#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Permuter valeur de a et b

void permuteVal(int *a, int *b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
	
}


int main(){
	
	/*printf("\n\nLa taille de char est %lu\n",sizeof(char));
	printf("\n\nLa taille de int est %lu\n",sizeof(int));
	printf("\n\nLa taille de double est %lu\n",sizeof(double));
	printf("\n\nLa taille de char* est %lu\n",sizeof(char*));
	printf("\n\nLa taille de void* est %lu\n",sizeof(void*));
	printf("\n\nLa taille de int* est %lu\n",sizeof(int*));
	printf("\n\nLa taille de double* est %lu\n",sizeof(double*));
	printf("\n\nLa taille de int** est %lu\n",sizeof(int**));
	printf("\n\nLa taille de int[10] est %lu\n",sizeof(int[10]));
	printf("\n\nLa taille de char[7][3] est %lu\n",sizeof(char[7][3]));
	printf("\n\nLa taille de float est %lu\n",sizeof(float));
	printf("\n\nLa taille de long est %lu\n",sizeof(long));
	printf("\n\nLa taille de long int est %lu\n",sizeof(long int));
	printf("\n\nLa taille de long long int est %lu\n",sizeof(long long int));
	
	//char tab[10]
	char tab[10];
	printf("\n\nLa taille de tab est %lu\n",sizeof(tab));
	printf("\n\nLa taille de tab[0] est %lu\n",sizeof(tab[0]));
	printf("\n\nLa taille de &tab[0] est %lu\n",sizeof(&tab[0]));
	printf("\n\nLa taille de *&tab est %lu\n",sizeof(&*tab));
	printf("\n\nLa taille de *&tab est %lu\n",sizeof(*&tab[0]));
	
	// char (*p)[10]=&tab
	char (*p)[10];
	printf("\n\nLa taille de p est %lu\n",sizeof(p)); // un pointeur est codé sur 8 octet
	printf("\n\nLa taille de *p est %lu\n",sizeof(*p));
	printf("\n\nLa taille de (*p)[2]) est %lu\n",sizeof((*p)[2]));
	printf("\n\nLa taille de &(*p)[2]) est %lu\n",sizeof(&(*p)[2]));
	*/
	//Permuter valeur de a et b
	int a=5,b=7;
	permuteVal(&a,&b);
	printf("\n\nLa valeur de a est %d et b est %d\n",a,b);
	
	
	
	
	
	
	
	
	
	
return 0;
}
