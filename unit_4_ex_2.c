#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	double a = atof(argv[1]), b = atof(argv[2]), c = atof(argv[3]);
	double D = b * b - 4 * a * c;
	double x1 = ((-b + sqrt(D)) / (2 * a)), x2 = ((-b - sqrt(D)) / (2 * a));
	double x = (-b / (2 * a));
	if(a != 0){
		if(D > 0){
			printf("\n Your roots are: x1 = %f; x2 = %f\n", x1, x2);
		} else if(D < 0){
			printf("\n No real roots!\n");
		} else{
			printf("\n Your root is: x = %f\n", x);	
		}
	} else{
		printf("\"a\" can't be equal to zero");
	}
	return 0;
}
