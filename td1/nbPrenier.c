#include <stdio.h>
#include <stdlib.h>
#include <time.h>




//fonction principale
int main(){
	
	//NOMBRE PREMIER
	/*printf("************NOMBRE PREMIER**********\n\n");
	int np,div=0;
	printf("Entrer un nombre a tester s'il est premier ");
	scanf("%d",&np);
	int p=np;
	while(p>=1 && div<=2){
		if(np%p==0){
			div+=1;	
		}p--;
	}if(div==2){
		printf("\nLe nombre %d est premier\n",np);
	}else{
		printf("\nLe nombre %d n'est pas premier\n\n",np);
	}*/
	
	int p=2,n;
	printf("Entrer un nombre a tester s'il est premier ");
	scanf("%d",&n);
	
	while((p*p)<=n){
			if(n%p==0){
				printf("\nLe nombre %d n'est pas premier\n\n",n); return 0;
			}
			p++;
		}
		printf("\nLe nombre %d est premier\n",n);
	
  return 0;
}


