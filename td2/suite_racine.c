#include <stdio.h>
#include <stdlib.h>
#include <time.h>


float racine(int n){
	
	float epsilon = 0.0001;
	float g=0,d=n;
	float m;
	while(d-g>epsilon){
	m=(d+g)/2;
	if(m*m>n){
	d=m;
	}else{g=m;}
	
	}return d;
}

float Rracine(int n){
	float rac=0;
	int tmp=n;
	float racs;
	
	n=n-1;
	rac=racine(n+racine(tmp));
	n=n-1;
	while(n>1){
		racs=racine(n+rac);
		rac=racs;
		n--;
		
	}return racs;
	
}

//Fonction principale
int main(){
	
	int n;
	printf("\n\nEntrer un entier ");
	scanf("%d",&n);
	printf("la racine de %d est %fl",n,Rracine(n));
	
	return 0;
	
}
