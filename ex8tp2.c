/*
 ============================================================================
 Name        : ex8tp2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int an;

		float x;

		printf("donner le nombre d'années \n");

		scanf("%d",&an);

		if(an>5)
	  {
			x=0.095;
	  }
		else if ((an<=5)&&(an>3))
	  {
			x=0.085;
	  }
		else if((an<=3)&&(an>1))
	  {
			x=0.65;
	  }
		else
	  {
			x=0.058;
	  }
		printf("le taux d'intéret sur %d années est %f \n",an,x);
return 0 ;
}
