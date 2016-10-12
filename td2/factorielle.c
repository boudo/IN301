#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int factorielle(int n){
	
	int res=1;
	if(n<=1){
		res=1;
	}else{
		res+= n*factorielle(n-1);
	}
	return res;
}
	

//Fonction principale
int main(){
	printf("\n**********Factorielle*********\n");
	int n;
	printf("\nEntrer un entier ");
	scanf("%d",&n);
	printf("\nLe factorielle de %d vaut %d\n",n,factorielle(n));
	
	return 0;
	
}
