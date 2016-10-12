#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main (){
	
	int u=1000;
	int it=0;
	//printf("\nEntrer un entier pour la suite de Syracuse ");
	//scanf("%d",&u);
	printf("\n%d ",u);
	while(u>1){
		if(!(u%2)){
			u=u/2;
			printf("%d ",u);
		}else{
			u=3*u+1;
			printf("%d ",u);
		}it++;
	}printf("\nLe nombre d'itération est %d\n",it);
	
	
	return 0;
	
}
