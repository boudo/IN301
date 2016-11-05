#include <stdio.h>
#include <stdlib.h>
#include <time.h>



struct Tableau{
	int taille;
	long int tab[100000];
};

int alea(int n){
	
	return rand()%n;
}

struct Tableau init_taille_tableau(int taille,int val){
	struct Tableau T;
	T.taille=taille;
	
	for(int i=0;i<taille;i++){
		T.tab[i]=alea(val);
	}return T;
}

void affiche_Tableau(struct Tableau T){
	printf("\n");
	for(int i=0;i<T.taille;i++){
		printf("%ld ",T.tab[i]);
	}
}

long long int produit_Tableau(struct Tableau T){
	long long int mulp=1;
	
	for(int i=0;i<T.taille;i++){
		mulp*=T.tab[i];
	}return mulp;
}

int min_Tableau(struct Tableau T){
	int min=T.tab[0];
	
	for(int i=1;i<T.taille;i++){
		if(T.tab[i]<min){
			min=T.tab[i];
		}
	}return min;
}

struct Tableau decalage_1_a_droite(struct Tableau T){
	T.taille=T.taille+1;
	
	for(int i=T.taille;i>0;i--){
		T.tab[i]=T.tab[i-1];
	}T.tab[0]=0;
	return T;
}
		

void permute_a_b(struct Tableau *T,int a,int b){
	int tmp=T->tab[a];
	T->tab[a]=T->tab[b];
	T->tab[b]=tmp;
}

struct Tableau trie_Tableau(struct Tableau T){
	int trier=0;
	int n=0;
	while(!trier){
		trier=1;
		
		for(int i=T.taille-1;i>n;i--){// n++ car après chaque passage le dernier élément permuté est triée
			if(T.tab[i]<T.tab[i-1]){
				/*int tmp=T.tab[i];
				T.tab[i]=T.tab[i-1];
				T.tab[i-1]=tmp;*/
				permute_a_b(&T,i,i-1);
				trier=0;
			}
		}n++;
	}return T;
}

struct Tableau decaler_a_droite(struct Tableau T,int indis){
	T.taille=T.taille+1;
	//int n=T.taille-1;
	for(int i=T.taille-1;i>indis;i--){
		T.tab[i]=T.tab[i-1];
	}//T.taille+=1;
	return T;
}


struct Tableau inser_Tableau(struct Tableau T,int val){ // x : element à inserer
	int i;
	//struct Tableau T0;
	for(i=0;i<T.taille;i++){
		if(T.tab[i]>val){
			if(i==0){
				T=decaler_a_droite(T,i);
				T.tab[i]=val;
				break;//return T;
			}else{
				T=decaler_a_droite(T,i);
				T.tab[i]=val;
				break;//return T;
			}
		}
	}
		if(i==T.taille){
			T.taille+=1;
			T.tab[i]=val;
			//return T;
		}return T;
}





int main(){
	srand(time(NULL));
	printf("\nLa taille de struc Tableau est %lu\n",sizeof(struct Tableau));
	/*int n;
	printf("Un nombre aléatoire entre 0 et ");
	scanf("%d",&n);
	printf("\nLe nombre aléatoire est %d\n",alea(n));*/
	
	//printf("Entrer: la taille du tableau, la valeur ");
	long int taille=10, val=20;
	//scanf("%d %d",&taille,&val);
	struct Tableau T0,T2;//T1,T2,T3;
	T0=init_taille_tableau(taille,val);
	affiche_Tableau(T0);
	//permute_a_b(&T0,0,1);
	//affiche_Tableau(T0);
	//printf("Le produit des éléments du tableau vaut %lld",produit_Tableau(T0));
	//printf("\nLa valeur minimal du tableau est %d\n",min_Tableau(T0));
	//T1=decalage_1_a_droite(T0);
	//printf("\nTableau décalé est ");
	//affiche_Tableau(T1);
	//printf("\nTableau trier est ");
	T2=trie_Tableau(T0);
	affiche_Tableau(T2);
	
	//T3=inser_Tableau(T2,5);
	//affiche_Tableau(T3);
	printf("\n");

return 0;



}

