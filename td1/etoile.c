#include <stdio.h>
#include <stdlib.h>
#include <time.h>




//fonction principale
int main(){
	
	/*int i;
	int nbEtoile=1;
	int nbEspace=10;
	
	while(nbEtoile<=10){
		i=1;
		while(i<=nbEspace){
			printf(" ");
			i++;
		}printf("*\n");
		nbEspace--;
		nbEtoile++;
	}
	
	int heure,minute,seconde;
	int a=60;
	int m;
	printf("Entrer le nombre a convertir ");
	scanf("%d",&m);
	seconde = m % a;
	m = m / a;
	minute = m % a;
	heure = m / a;
	printf("heure= %d , minute= %d , seconde= %d\n\n" ,heure,minute,seconde);
	
	*/
	
	int x,y,tmp=0,res=0;
	printf("Entrer les nombres à multiplier ");
	scanf("%d,%d" , &x, &y);
	printf("vous faite la multiplicattion Egyptienne de %d par %d \n", x,y);
	 while(x >= 1){
		 if(x % 2 == 0){
			 //res += (x/2) * (2*y);
			 x = x/2;
			 //tmp=y;
			 y=tmp+y;
		 }else{
			 //res = (x-1) * (y+tmp);
			 x = x-1;
			 tmp=tmp+y;
			 //y= y+y;
		 }
		 }res= y+tmp;
		 printf("%d\n\n",res); 
  
  return 0;
}
