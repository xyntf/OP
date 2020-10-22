#include <stdio.h>
#include<math.h>
int main(void){
	printf(" Enter parameters a, b and c of your quadratic equation separated by spaces: ");
	float a, b, c;
	scanf("%f%*c%f%*c%f", &a, &b, &c);
	if((b * b - 4 * a * c) > 0){
		printf("\n Your roots are: x1 = %f; x2 = %f\n", ((-b + sqrt(b * b - 4 * a * c)) / (2 * a)), ((-b + sqrt((b * b) + 4 * a * c)) / (2 * a)));
	} else if((b * b - 4 * a * c) < 0){
		printf("\n No real roots!\n");
	} else{
		printf("\n Your root is: x = %f\n", (-b / (2 * a)));	
	}
	return 0;
}