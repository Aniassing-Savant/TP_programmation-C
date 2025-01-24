#include <stdio.h>
#include <stdlib.h>

#include "test_libry.c"

int main( void ) {
	
	int result = power( 2, 3 );
 printf( "2? == %d\n", result );
 result = fact( 6 );
 printf( "6! == %d\n", result );


// Exercice 1	
	printf("*****************Exercice 1*****************\n");
	bonjour();

// Exercice 2
	printf("*****************Exercice 2*****************\n");
	inverse();

  
//Exercice 3
	printf("*****************Exercice 3*****************\n");
	float x, y, p;
	printf("Entrer un nombre reel : ");
	scanf("%f",&x);
	printf("Entrer un autre nombre reel : ");
	scanf("%f",&y);
	p = produit(x, y);
printf("Le produit de %f et %f sur une precision de 3 chiffre apres la virgule est %.3f",x,y,p);

//Exercice 4
	printf("\n*****************Exercice 4*****************\n");
	int n;
	printf("Entrer un entier n :");
	scanf("%d",&n);
	parite(n);
	
//Exercice 5
	printf("\n*****************Exercice 5*****************\n");
	int a;
	int b;
	printf("Entrer un entier a  :");
	scanf("%d",&a);
	printf("Entrer un entier b  :");
	scanf("%d",&b);
	ComparerDeuxEntiers(a, b);
	
//Exercice 6
	printf("\n*****************Exercice 6*****************\n");
	 int A, B, C;
	 printf("Entrer un entier A  :");
		scanf("%d",&A);
	printf("Entrer un entier B  :");
		scanf("%d",&B);
	printf("Entrer un entier C  :");
		scanf("%d",&C);
	 void TrierCroissantTroisEntier(int A, int B, int C);


// Exercice 16
    printf("*****************Exercice 16*****************\n");
    char x1,y1;
    printf("Entrer le premier caractere:");
    scanf(" %c", &x1);
    printf("Entrer le deuxieme caractere:");
    scanf(" %c", &y1);
    printf("Avant permutation: x1 = %c, y1 = %c\n", x1, y1);
    permuterChar(&x1, &y1);
    printf("Apr?s permutation: x1 = %c, y1 = %c\n", x1, y1);

// Exercice 17
    printf("*****************Exercice 17*****************\n");
    int a1, b1;
    printf("Entrer le premier nombre");
    scanf("%d", &a1);
    printf("Entrer le deuxieme nombre ");
    scanf("%d", &b1);
    printf("Somme de %d et %d = %d\n", a1, b1, somme(a1, b1));
    
 return EXIT_SUCCESS;
 
}
