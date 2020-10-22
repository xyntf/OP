#include <stdio.h>
#include <math.h>
int main(void){
	printf(" Enter desired number of iterations to calculate pi using series 1 - 1 / 3 + 1 / 5 - 1 / 7 + 1 / 9 - ...\n Enter n = ");
	int n;
	scanf("%d", &n);
	if(n > 0){
		float sum = 0;
		for(int i = 1; i <= n; i++){
			sum += pow(-1, i + 1) / (2 * i - 1);
		}
		printf("\n PI = %f\n", sum * 4);
	} else{
		printf("\n Number n must be natural\n");
	}
	return 0;
}