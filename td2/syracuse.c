#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main (){
	
	int u;
	int it=0;
	printf("\nEntrer un entier pour la suite de Syracuse ");
	scanf("%d",&u);
	printf("\n%d ",u);
	while(u>1){
		if(!(u%2)){
			printf("%d ",u=u/2);
		}else{
			printf("%d ",u=3*u+1);
		}it++;
	}printf("\nLe nombre d'itération est %d\n",it);
	
	
	return 0;
	
}
