/*
 ============================================================================
 Name        : ex4tp2.c
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
	int a ;
	printf (" donner l'année ");
	scanf ("%d",&a);
	if ((a%4==0)&&(a%100!=0))
	{ printf ("%d est bissextile ",a);
	}
	else
	{
		printf ( " %d non bissextile ",a);
	}
	return 0 ;
}
