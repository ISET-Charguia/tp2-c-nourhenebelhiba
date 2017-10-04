/*
 ============================================================================
 Name        : ex71tp2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	char c ;
	printf ("donner un caractere ");
	scanf ("%c",&c);
	if ((c>=65)&&(c<=90))
	{printf ("%c est une lettre majuscule ");}
	else if ((c>=97)&&(c<=122))
	{printf ("%c est une lettre miniscule ");}
	else if ((c>=48)&&(c<=57))
	{printf ("%c est un chiffre ");}
	else
	{printf ("%c est un caractére spécial ");}
	return 0 ;

}
