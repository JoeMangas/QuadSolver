#include <dirent.h>
#include <stdlib.h>
#include <unistd.h> 
#include <math.h>//For checking file types
#include <stdio.h>

int main(void){

	double result, exptResult, absError;
	
	printf("Please enter result and the expected result: \n");
	scanf("%lf %lf",&result, &exptResult);
	
	printf("%lf, %lf\n", result, exptResult);
	absError = result - exptResult;
	
	if(absError < 0) absError = absError * -1;
	

	printf("your absolute error is: %lf\n", absError);

}
