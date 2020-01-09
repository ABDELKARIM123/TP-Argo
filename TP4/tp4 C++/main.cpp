#include <iostream>

using namespace std;

class Entier {

	 private: short a;
	 private: int b;
	 private: long c;

	 public: int factoriel(int num) {
		 if (num == 0 || num == 1) return 1;
		 else {
			 int temp = 1;
			 for (int i = 1; i <= num; i++) {
				 temp = temp * i;
			 }

			 return temp;
		 }
	 }

	 public: bool est_premier(int num) {

		 int temp = 0;

		 for(int i = 1; i <= num; i++) {
			 if (num % i == 0) temp++;
		 }

		 return (temp > 2) ? false : true;
	 }

	 public: bool est_pair(int num) {
		 return (num % 2 == 0) ? true : false;
	 }

	 public: int pgdc(int num1, int num2) {

		 int r;

		 do {
			 r = num1 % num2;
			 num1 = num2;
			 num2 = r;
		 }while (r != 0);

		 return num1;
	 }

	 public: void liste_diviseurs(int num) {

		 cout << "Liste diviseurs: ";

		 for (int i = 1; i < num; i++) {
			 if (num % i == 0) cout << i;
		 }
	 }

	 public: int ppcm(int num1, int num2) {

		 int Produit, Reste, PPCM;

			Produit = num1*num2;
			Reste   = num1%num2;

			while(Reste != 0){
			    num1 = num2;
			    num2 = Reste;
			    Reste = num1%num2;
		        }

			PPCM = Produit/num2;

			return PPCM;
	 }

	 public: bool est_multiple_de (int num1, int num2) {
		 return (num2 % num1 == 0) ? true : false;
	 }
};
