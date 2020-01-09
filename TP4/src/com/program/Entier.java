package com.program;
/**
 * 
 * @author BETOUIL Anass
 * @version 1.0
 *
 */

public class Entier {
	 
	 private short a;
	 private int b;
	 private long c;
  
	 /**
	  * 
	  * @param num
	  * @return int
	  */
	 
	 public static int factoriel(int num) {
		 if (num == 0 || num == 1) return 1;
		 else {
			 int temp = 1;
			 for (int i = 1; i <= num; i++) {
				 temp = temp * i;
			 }
			 
			 return temp; 
		 }
	 }
	 
	 /**
	  * 
	  * @param num
	  * @return boolean
	  */
	 
	 public static boolean est_premier(int num) {
		 
		 int temp = 0;
		 
		 for(int i = 1; i <= num; i++) {
			 if (num % i == 0) temp++;
		 }
		 
		 return (temp > 2) ? false : true;
	 }
	 
	 /**
	  * 
	  * @param num
	  * @return boolean
	  */
	 
	 public static boolean est_pair(int num) {
		 return (num % 2 == 0) ? true : false;
	 }
	 
	 /**
	  * 
	  * @param num1
	  * @param num2
	  * @return int
	  */
	 
	 public static int pgdc(int num1, int num2) {
		 
		 int r;
		 
		 do {
			 r = num1 % num2;
			 num1 = num2;
			 num2 = r;
		 }while (r != 0);
		 
		 return num1;
	 }
	 
	 /**
	  * 
	  * @param num
	  */
	 
	 public static void liste_diviseurs(int num) {
		
		 System.out.println("Liste diviseurs: ");
		 
		 for (int i = 1; i < num; i++) {
			 if (num % i == 0) System.out.println(i);
		 }
	 }
	 
	 /**
	  * 
	  * @param num1
	  * @param num2
	  * @return int
	  */
	 
	 public static int ppcm(int num1, int num2) {
		 
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
	 
	 /**
	  * 
	  * @param num1
	  * @param num2
	  * @return boolean
	  */
	 
	 public static boolean est_multiple_de (int num1, int num2) {
		 return (num2 % num1 == 0) ? true : false;
	 }
}
 