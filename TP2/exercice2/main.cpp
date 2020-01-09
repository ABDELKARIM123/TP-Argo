#include <iostream>

using namespace std;

void affiche_vecteur(int * vecteur, int dim);
void affiche_matrice(int ** matrice, int l, int col);
int * alloue_vecteur(int dim, int val);
int ** alloue_matrice(int l, int col, int val);
int ** genere_matrice_identite(int dim);
void libere_vecteur(int * vecteur);
void libere_matrice(int ** matrice,int l);


int main(){

     int * vecteur = alloue_vecteur(6,1);
     int ** matrice = alloue_matrice(2,2,5);

      affiche_matrice(matrice,2,2);
      affiche_vecteur(vecteur,6);

	return 0;

}

void affiche_vecteur(int *vecteur, int dim) {

    int i=0;

    for(i=0;i<dim;i++)
    {
       cout << "valeur " << i << ": " << vecteur[i] << endl;
    }
}

void affiche_matrice(int **matrice, int l, int col) {

	int i=0,j=0;

	for(i=0;i<l;i++)
	{
		for(j=0;j<col;j++)
		{
			cout << "valeur (" << i << "," << j << "): " << matrice[i][j] << endl;
		}
	}
}

int * alloue_vecteur(int dim, int val) {

     int i=0;
     int *vecteur = new int[dim];

       for(i=0;i<dim;i++)
       {
           vecteur[i] = val;
       }
    return vecteur;
}

int ** alloue_matrice(int l, int col, int val) {

	 int i=0,j=0;
	 int ** matrice = new int*[l];

	  for(i=0;i<l;i++) {

	  	 matrice[i] = new int[col];

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

     delete[] vecteur;
}

void libere_matrice(int ** matrice,int l) {

	 int i=0;

	 delete[] matrice;

	  for(i=0;i<l;i++) {

	  	 delete matrice[i];

	  }
}
