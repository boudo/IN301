#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int somme_div(int a){
	int s=0,i;
	for(i=1; i<=a/2; i++){
		if(!(a%i)){
			s+=i;
		}
	}return s;
}
	
int estAmis(int a,int b){
	return (somme_div(a)==b && somme_div(b)==a);
}

//fonction principale
int main(){
	
	/*int i,b; 
	printf("Entrer les nombre ");
	scanf("%d,%d",&i,&b);
	if(estAmis(i,b)) {printf("\n\nsont amis\n\n");}
	else {printf("\n\nsont pas amis\n\n");}
	*/
	int t;
	int n=100000;
	int sommeDet;
	for(t=1; t<n; t++){ //t<n =1
		sommeDet=somme_div(t);
		if(t<=sommeDet && sommeDet<n){ // sup && sommeDet
			if(t==somme_div(sommeDet)){
				printf("%d et %d sont amis\n\n",t,sommeDet);
			}
		}
	}
	
	// NOMBRE AMIS
	
	

  return 0;
}


