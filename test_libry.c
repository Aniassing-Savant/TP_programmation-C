#include "test_libry.h"
// Definition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
 unsigned int result = 1;
 while ( value > 1 ) {
 result *= value;
 value --;
 }
 return result;
}
// Definition d'une fonction d'?l?vation ? une puissance donn?es.
int power( int value, unsigned int pow ) {
 if ( pow == 0 ) return 1;
 if ( pow == 1 ) return value;
 int accumulator = 1;
 while( pow > 0 ) {
 accumulator *= value;
 pow--;
 }
 return accumulator;
}

// Exercice 1
void bonjour(void) {
	printf("Bonjour \n");
 }

// Exercice 2
int inverse(){
int nombre,inverse = 0;
printf("Entrer un nombre a trois chiffres \n");
scanf("%d",&nombre);
if(nombre < 100|| nombre >999){
    printf("veuillez entrer un nombre valide à trois chiffres.\n");
}
while (nombre !=0)
{
    int chiffre= nombre%10;
    inverse=inverse*10+chiffre;
    nombre /=10;
}
printf("le nombre inverse est : %d\n", inverse);
return 0;
}
	
	
// Exercice 3
float produit(float x, float y){	
	x*y;	
}

// Exercice 4
void parite(int n){
	if (n % 2 == 0)
		printf("l'entier est pair");
	else
		printf("l'entier est impaire");
}

// Exercice 5
void ComparerDeuxEntiers(int a, int b){
	if (a < b)
		printf("a < b");
	else if (a > b)
		printf("a > b");
	else
	printf("a = b");
}

// Exercice 6
void TrierCroissantTroisEntier(int A, int B, int C) {
	    if(A>=B && A>=C)
	 {
		 if(B>=C) printf("%d %d %d\n",C,B,A);
		 else printf("%d %d %d\n",B,C,A);
	 }
	 if(B>=A && B>=C)
	 {
		 if(A>=C) printf("%d %d %d\n",C,A,B);
		 else printf("%d %d %d\n",A,C,B);
	 }
	 if(C>=A && C>=B)
	 {
		 if(A>=B) printf("%d %d %d\n",B,A,C);
		 else printf("%d %d %d\n",A,B,C);
	 }
}
 
// Exercice 16 

void permuterChar(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
// Exercice 17 :
int somme(int a, int b) {
    return a + b;
}
