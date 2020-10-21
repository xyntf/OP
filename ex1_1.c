// lab1 ex1
#include <stdio.h>
int main(void){
	float c, f;
	printf("Enter temperature in C = ");
	scanf("%f", &c);
	f = ((c * 9)/5) + 32;
	printf("\nIt is %f degrees in Fahrenheit.\n", f);
	return 0;
}
