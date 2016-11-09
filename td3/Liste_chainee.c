#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#define vrai 1
//#define faux 0

struct element{
	int val;
	struct element *suivant;
}element;
typedef struct element* liste; // liste est un pointeur


liste creer_lite_vide(){ // creer_liste vide renvoie une liste vide qui sera stocket dans un poiteur (initialise un pointeur)
	return NULL;
}

int est_liste_vide(liste l){ // une liste est vide si son adresse est NULL
	if(l == NULL) return 1;
	
	return 0;
}

void affiche_liste(liste l){
	while(!est_liste_vide(l)){
		printf(" %d",l->val);
		l = l->suivant; //l=l->suivant
	}
}

liste liber_memoire(liste l){
	liste tmp = l;
	while(l != NULL){
		l = l->suivant;
		free(tmp);
	}return NULL;
}

liste ajoute_debut(liste l, int n){
	liste a;
	a = malloc(sizeof(liste));
	if(a == NULL) exit(1); // problème malloc car a = NULL
		a->val = n;
		a->suivant = l;
	return a;
}

liste ajoute_fin(liste l, int n){
	liste a;
	a = malloc(sizeof(liste));
	a->val = n;
	a->suivant = NULL;
	
		
	if(l == NULL){// problème malloc car a = NULL
		
			return a;
		
	}
		l->suivant = ajoute_fin(l->suivant, n);
		
	return l;
}

/*liste ajoute_fin(liste l, int n){
	liste a,new_l;
	
	a = malloc(sizeof(liste));
	if(a == NULL){ exit(1);} // problème malloc car a = NULL
	a->val = n;
	a->suivant = NULL;
	
	if(l == NULL){
		return a;		
	}new_l = l;			//un nouveau pointeur qui prend l'adresse de "l", on modifie l'adresse de "l" doù new_l
	while(l->suivant){
		l = l->suivant;
	}l->suivant = a;
	return new_l;
}*/

int est_trier(liste l){
	liste a;
	a=l;
	if(est_liste_vide(a)){                // la liste vide est trier
		return 1;
	}else if(est_liste_vide(a->suivant)){ // la liste de un elément est trier
		return 1;
	}else{
		while(!est_liste_vide(a->suivant)){       // prarcourire la liste
			int tmp = a->val;
			a = a->suivant;
			int tmp1 = a->val;
			if(tmp > tmp1){
				return 0;
			}
		}
	}return 1;
}

liste ajoute_trier(liste l, int n){
	//liste b;
	int tmp = l->val;
	//b=l;
	if(est_trier(l)){
		if(est_liste_vide(l)){
			 return ajoute_debut(l, n);
			 //return b;
		}
		else if(est_liste_vide(l->suivant) && tmp >= n){
			return ajoute_debut(l, n);
			//return b;
		}else if(est_liste_vide(l->suivant) && tmp < n){
			return ajoute_fin(l, n);
			//return b;
		}else if(tmp >= n){
			return ajoute_debut(l, n);
			//return b;
		}else if(tmp < n){
		l->suivant = ajoute_trier(l->suivant, n);
		}
	}return l;
}


int main(){
	int n,a;
	int i=0;
	liste L;
	L=creer_lite_vide();
	while(i<5){
		scanf("%d",&n);
	//L=ajoute_debut(L,n);
	L=ajoute_fin(L ,n);
	printf("\n");
	affiche_liste(L);
	i++;}
	printf("\n");
	//int a;
	printf("Element a insérer ");
	scanf("%d",&a);
	L=ajoute_trier(L, a);
	affiche_liste(L);
	printf("\n");
	int b;
	printf("Element a insérer ");
	scanf("%d",&b);
	L=ajoute_trier(L, b);
	affiche_liste(L);
	printf("\n");
	return 0;
}
