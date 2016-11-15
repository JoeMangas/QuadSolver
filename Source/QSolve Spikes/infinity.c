#include <dirent.h>
#include <stdlib.h>
#include <unistd.h> 
#include <math.h>//For checking file types
#include <stdio.h>
float a;
int main() //runs the program
{

	printf("%s\n", "Enter a");
	scanf("%f", &a);
	a = INFINITY;
	if(isinf(a) == 1)
	{
		printf("%f\n",  a);
		printf("%f\n", sqrt(a) );
	}
	 else if(1 == isnan(a))
	{
		printf("%f\n", a);
		printf("%f\n", sqrt(a) );
	}
	
	
	


	}
