#include <stdio.h>
#include <stdlib.h>

void affiche_vecteur(int *vecteur, int dim);
void affiche_matrice(int **matrice, int l, int col);
int * alloue_vecteur(int dim, int val);
int ** alloue_matrice(int l, int col, int val);
int ** genere_matrice_identite(int dim);
void libere_matrice(int ** matrice, int l);
void libere_vecteur(int * vecteur);

main(){

	int i=0;
    int *vect = alloue_vecteur(6,2);
    int **matrice = alloue_matrice(4,2,1);
    int **mat_identite = genere_matrice_identite(2);

	    affiche_vecteur(vect,6);
		affiche_matrice(matrice,4,2);
		printf("\n");
		affiche_matrice(mat_identite,5,5);
		libere_vecteur(vect);
		libere_matrice(matrice,4);
		libere_matrice(mat_identite,5);

	return 0;

}

void affiche_vecteur(int *vecteur, int dim) {

    int i=0;

    for(i=0;i<dim;i++)
    {
       printf("valeur %d: %d \n",i,*(vecteur+i));
    }
}

void affiche_matrice(int **matrice, int l, int col) {

	int i=0,j=0;

	for(i=0;i<l;i++)
	{
		    printf("(");
		for(j=0;j<col;j++)
		{
			printf("%d ",i,j,matrice[i][j]);
		}
		    printf(")\n");
	}
}

int * alloue_vecteur(int dim, int val) {

     int i=0;
     int *vecteur = malloc(dim*(sizeof(int)));

       for(i=0;i<dim;i++)
       {
           vecteur[i] = val;
       }
    return vecteur;
}

int ** alloue_matrice(int l, int col, int val) {

	 int i=0,j=0;
	 int ** matrice = malloc(l*(sizeof(int*)));

	  for(i=0;i<l;i++) {

	  	 matrice[i] = malloc(col*(sizeof(int)));

	  }

	  for(i=0;i<l;i++) {

	  	 for(j=0;j<col;j++) {

	  	 	matrice[i][j] = val;

		   }
	  }
	        return matrice;
}

int ** genere_matrice_identite(int dim) {

	 int i=0;
	 int ** matrice = alloue_matrice(dim,dim,0);

	  for(i=0;i<dim;i++) {

	  	 matrice[i][i] = 1;
	  }
	     return matrice;
}

void libere_vecteur(int * vecteur) {

     free(vecteur);
}

void libere_matrice(int ** matrice,int l) {

	 int i=0;

	 free(matrice);

	  for(i=0;i<l;i++) {

	  	 free(matrice[i]);

	  }
}
