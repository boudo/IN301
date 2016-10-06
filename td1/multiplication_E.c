#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//fonction principale
int main(){
	
	// MULTIPLICATION EGYPTIENNE
	printf("\n***********MULTIPLICATION EGYPTIENNE*************\n");
	int x=0,y=0,tmp=0,res=0;
	printf("\nEntrer les nombres à multiplier ");
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


