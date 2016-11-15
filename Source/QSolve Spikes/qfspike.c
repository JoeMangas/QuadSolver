#include <stdio.h>
#include <math.h>


int main(void){

	double a,b,c,rt1,rt2;
	
	printf(" Please enter a b c \n");
	scanf("%lf %lf %lf",&a, &b, &c);

	rt1 = (-b+sqrt(b*b-4.*a*c))/(2.*a);
	rt2 = (-b-sqrt(b*b-4.*a*c))/(2.*a);
	
printf("\n root1: %lf root2: %lf ",rt1 ,rt2);

return 0;
}
