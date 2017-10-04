/*
 ============================================================================
 Name        : ex5tp2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	int y , u, d, c ;
	printf (" donner un entier inferieur à 999:\n ");
	scanf ("%d",&y);
	    u=y/100;
	    d=y%100/10 ;
	    c=(y%100)%10;


	printf ( "%d %d %d",u,d,c);

	return 0 ;

}
