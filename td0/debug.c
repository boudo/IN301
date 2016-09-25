#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//fonction factorielle
int factorielle(int x){
  int res=x;
  if(x == 0) return 0;
  while(x > 1){
    res *= (x-1);
    x = x-1;
  }
  return res;
}

//fonction somme
int somme(int x){
  int res = 0;
  int i = 1;
  while(i <= x){ 
    res += i;/* fin de boucle */
    i++;     /* incrementation*/
  }
  return res;
}

//fonction maximum
int maximum(int x, int y){
  int res = 0;
  if(x < y)
    res=y;
  else if (x > y)
    res=x;
  else
   res=x;
return res;
}

//fonction principale
int main(){
  int a, b;

  srand(time(NULL));
  a = rand() % 8 + 2;
  b = factorielle(a);
  printf("\nFactorielle de %d vaut %d\n\n", a, b);
  
  a = rand() % 100;
  b = somme(a);
  printf("\nLa somme des entiers de 1 a %d vaut %d\n\n", a, b);

  a = rand() % 100;
  b = rand() % 100;
  printf("\nLe maximum entre %d et %d vaut %d\n\n", a, b, maximum(a,b));
  
  return 0;
}
