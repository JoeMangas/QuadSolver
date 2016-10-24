//CS 2240
//Stephen Betcher
//Tuesday Febuary 8nd
//Assignment3


#include <dirent.h>
#include <stdlib.h>
#include <unistd.h> 
#include <math.h>//For checking file types
#include <stdio.h>
// gets the current working directory
float a;
float b;
float c;
float x1;
float x2;
void roots(float a1, float b1, float c1) ;
int main() //runs the program
{
	printf("%s\n", "Enter a");
	scanf("%f", &a);
	printf("%s\n", "Enter b");
	scanf("%f", &b);
	printf("%s\n", "Enter c");
	scanf("%f", &c);
	 //takes in the first argument from the user
roots(a,b,c);

if (isnan(x1)  || isnan(x2) )
{
printf("%s\n",  "error");
}

	else {
	 printf("X1:  %f", x1 );
	 printf("\nX2:  %f", x2 );
	}
}

void roots(float a1, float b1, float c1) 
{
 x1 = ((-b1 + sqrt((b1 * b1) - 4 * a1 * c1)) /2 * a1);
 x2 = ((-b1 - sqrt((b1 * b1) - 4 * a1 * c1)) /2 * a1);


}

