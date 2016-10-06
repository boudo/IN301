#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//fonction principale
int main(){
	  
	  //LIMITE D'UNE SUITE
	printf("******************LIITE DE LA SUITE S****************\n\n");

	float precision = 0.01;
	float s = 0.0;
	 int i = 1;
	
	while(1.0/(i*i) >= precision){
		s+= 1.0/(i*i);
		i++;
	}printf("La limite de suite S est %fl\n\n", s);
	
	

  return 0;
}


