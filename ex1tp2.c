/*
 ============================================================================
 Name        : ex1tp2.c
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
	int x ;
	printf ("donnez un entier");
	scanf ("%d",&x);
	if (x%3==0)
	{
		printf ("l'entier %d est divisible par 3",x);
	}
	else
	{
		printf("l'entier %d n'est pas divisible par 3" ,x);

	}
	return 0 ;
}
