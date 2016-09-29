#include <stdio.h>
#include <stdlib.h>
#include <time.h>




//fonction principale
int main(){
	// ETOILE
	printf("\n\n**********ETOILE************\n\n");
	int i;
	int nbEtoile=1;
	int b;
	printf("Entrer le nombre d'étoile ");
	scanf("%d",&b);
	int nbEspace=b;
	
	while(nbEtoile<=b){
		i=1;
		while(i<=nbEspace){
			printf(" ");
			i++;
		}printf("*\n");
		nbEspace--;
		nbEtoile++;
	}
	
	//CONVERTION
	printf("\n\n****************CONVETION***************");
	int heure,minute,seconde;
	int a=60;
	int n, m;
	printf("\n\nEntrer le nombre de seconde à convertir ");
	scanf("%d",&m);
	n=m;
	seconde = m % a;
	m = m / a;
	minute = m % a;
	heure = m / a;

	if(n==0){
	printf("\n%d seconde correspond à  %d heure  %d minute  %d seconde\n\n" ,n,heure,minute,seconde);
	}
	else if (seconde>1){
		if(heure>1){
			printf("\n%d secondes correspond à  %d heures  %d minutes  %d secondes\n\n" ,n,heure,minute,seconde);
		}else if(minute>1){
		printf("\n%d secondes correspond à  %d heure  %d minutes  %d secondes\n\n" ,n,heure,minute,seconde);
			}else{
			printf("\n%d secondes correspond à  %d heure  %d  minute  %d secondes\n\n" ,n,heure,minute,seconde);
		}
	}
	
	// MULTIPLICATION EGYPTIENNE
	printf("\n***********MULTIPLICATION EGYPTIENNE*************\n\n");
	int x=0,y=0,tmp=0,res=0;
	printf("Entrer les nombres à multiplier ");
	scanf("%d,%d" , &x, &y);
	printf("\n\nvous faite la multiplicattion Egyptienne de %d par %d \n\n", x,y);
	 while(x > 1){
		 if(x % 2 == 0){
			 x = x/2;
			 y= 2*y;
		 }else{
			 x = x-1;
			 tmp=tmp+y;
		 }
		 }res= y+tmp;
		 printf("le resultat est %d\n\n",res); 
  
  return 0;
}
