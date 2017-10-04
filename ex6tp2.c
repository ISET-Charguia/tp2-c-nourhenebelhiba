/*
 ============================================================================
 Name        : ex6tp2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float a, b, c, max , min ;
	scanf ("%f %f %f",&a,&b,&c);
	 max=a;

	 min=a;

	 if (max<b)
	 {
		 max=b;
	 }
	 if (max<c)
	 {
		 max=c;
	 }
	 if (min>b)
	 {
		 min=b;
	 }
	 if (min>c)
	 {
		 min=c;
	 }
	 printf("le max est %f et le min est %f \n",max,min);

	return 0;
}
