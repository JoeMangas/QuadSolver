#include <dirent.h>
#include <stdlib.h>
#include <unistd.h> 
#include <math.h>//For checking file types
#include <stdio.h>

void SquareRoot(float a1, float b1, float c1);
void absoluteError();

double rt1,rt2,abserror;

int main(void){

	double a,b,c;
	FILE * file;
	file = fopen("logfile.txt","w");
	char buff[255];
	char output[50];
	char output2[50];

	do{
	printf("Please enter a b c \n");
	scanf("%lf %lf %lf",&a, &b, &c);

	if(a > pow(10,38.53) || a < pow(-10,38.53)){
		fprintf(file, "a is out of the range of IEEE single floating points");
		printf("a is out of the range of IEEE single floating point");
	}else
	if(b > pow(10,38.53) || b < pow(-10,38.53)){
		fprintf(file, "b is out of the range of IEEE single floating points");
		printf("b is out of the range of IEEE single floating point");
	}else
	if(c > pow(10,38.53) || c < pow(-10,38.53)){
		fprintf(file, "c is out of the range of IEEE single floating points");
		printf("c is out of the range of IEEE single floating point");
	}else
	
	if(a == 0){
		fprintf(file, "Divide by zero error\n");
		//fputs("Divide by zero error", file);
			
	}else	
	SquareRoot(a,b,c);
	
	if (isnan(rt1)  || isnan(rt2))
	{
		fprintf(file, "%s\n",  "NaN Error");
		fprintf(file, "%f\n", sqrt(rt1) );
		fprintf(file, "%f\n", sqrt(rt2) );
		//fputs("error, nan", file);
		//fputc(rt1,file);
		//fputc(rt2,file);

	}//end if
	else if (isinf(rt1) == 1 || isinf(rt2) == 1)
	{
		fprintf(file, "%s\n", "Infinity error" );
		fprintf(file, "%f\n", sqrt(rt1) );
		fprintf(file, "%f\n", sqrt(rt2) );
		//fputs("Infinity error", file);
		//fputc(rt1,file);
		//fputc(rt2,file);
	}

	/* code */

	else 
	{
		absoluteError();
		fprintf(file, "rt1:  %f\n", rt1 );
	 	fprintf(file, "rt2:  %f\n", rt2 );

		

	 	//fputc(rt1,file);
		//fputc(rt2,file);
	}//end else 
	printf("Would you like to do another computation? \n");
	scanf("%s", buff);
	}while(buff[0] == 'y');
	fclose(file);

}//end main

void absoluteError(){

	double exp1, exp2;
	printf("Please enter your expected values for the roots: (-b + sqrt... first then -b - sqrt)\n");
	scanf("%lf %lf",&exp1, &exp2);

	abserror = rt1 - exp1;
	if(abserror < 0) abserror = abserror * -1;
	printf("Your absolute error for root 1 is %lf\n", abserror);

	abserror = rt2 - exp2;
	if(abserror < 0) abserror = abserror * -1;
	printf("Your absolute error for root 2 is %lf\n", abserror);
}//end absoluteError

void SquareRoot(float a, float b, float c){

	rt1 = (-b+ sqrt(b*b-4.*a*c))/(2.*a);
	rt2 = (-b- sqrt(b*b-4.*a*c))/(2.*a);

}//end SquareRoot
