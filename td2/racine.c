#include <stdio.h>
#include <stdlib.h>
#include <time.h>



float racine(int n){
	
	float epsilon = 0.001;
	float g=0,d=n;
	float m;
	while(d-g>epsilon){
	m=(d+g)/2;
	if(m*m>n){
	d=m;
	}else{g=m;}
	
}return d;
}

//fonction principale
int main(){
	/*racine(int n)
	float epsilon = 0.001;
	float g=0,d=n;
	flaot m;
	while(d-g>epsilon){
	m=(d+g)/2;
	if(m*m>n){
	d=m;
	}else{g=m}
	return d*/
	int n;
	printf("\n\nEntrer un entier ");
	scanf("%d",&n);
	printf("la racine de %d est %fl",n,racine(n));

		
	

  return 0;
}


