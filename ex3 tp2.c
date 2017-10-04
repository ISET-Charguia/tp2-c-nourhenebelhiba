/*
 ============================================================================
 Name        : ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
	int a,b ;
	float x ;

		printf ( " donnez la 1ere valeur a: \n");
	scanf("%d", &a);


	printf ( "donnez la 2eme valeur b: \n");
	scanf ("%d", &b);
	x=(-b)/(a);
			printf (" la solution de l'equation = \n %f",x);
	return 0;
}
