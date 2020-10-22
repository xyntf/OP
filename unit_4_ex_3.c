#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int args, char *argv[]){
	//printf(" Enter desired number of iterations to calculate pi using series  PI / 4 = 1 - 1 / 3 + 1 / 5 - 1 / 7 + 1 / 9 - ...\n Enter n = ");
	//int n;
	//scanf("%d", &n);
	if(atoi(argv[1]) > 0){
		float sum = 0;
		for(int i = 1; i <= atoi(argv[1]); i++){
			sum += pow(-1, i + 1) / (2 * i - 1);
		}
		printf("\n PI = %f\n", sum * 4);
	} else{
		printf("\n Number n must be natural\n");
	}
	return 0;
}