#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//fonction principale
int main(){
	
	//CONVERTION
	printf("\n****************CONVETION***************");
	int heure,minute,seconde;
	int a=60;
	int n=0, m=0;
	printf("\n\nEntrer le nombre de seconde à convertir ");
	scanf("%d",&m);
	n=m;
	seconde = m % a;
	m = m / a;
	minute = m % a;
	heure = m / a;

	
		if(heure>1){
			if(minute>1 && seconde>1){
			printf("\n%d secondes correspond à  %d heures  %d minutes  %d secondes\n\n" ,n,heure,minute,seconde);
			}else if(minute>1){
			printf("\n%d secondes correspond à  %d heures  %d minutes  %d seconde\n\n" ,n,heure,minute,seconde);
			}else if(seconde>1){
			printf("\n%d secondes correspond à  %d heures  %d minute  %d secondes\n\n" ,n,heure,minute,seconde);
			}else{
			printf("\n%d seconde correspond à  %d heure  %d minute  %d seconde\n\n" ,n,heure,minute,seconde);
			}
		}else if(minute>1 && seconde>1){
		printf("\n%d secondes correspond à  %d heure  %d minutes  %d secondes\n\n" ,n,heure,minute,seconde);
		}else if(minute>1){
		printf("\n%d secondes correspond à  %d heure  %d minutes  %d seconde\n\n" ,n,heure,minute,seconde);
		}else if (seconde>1){
		printf("\n%d secondes correspond à  %d heure  %d minute  %d secondes\n\n" ,n,heure,minute,seconde);
		}
	else{
		printf("\n%d seconde correspond à  %d heure  %d minute  %d seconde\n\n" ,n,heure,minute,seconde);
	}
	
	
  return 0;
}


