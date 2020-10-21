// lab2 ex1
#include <stdio.h>
int main(void){
	int t =2;
	printf(" t = %d\n", t);
	t += 5;
	printf(" (t += 5) = %d\n", t);
	t *= 10;
	printf(" ((t += 5) *= 10) = %d\n", t);
	t -= 6;
	printf(" (((t += 5) *= 10) -= 6) = %d\n", t);
	t /= 8;
	printf(" ((((t += 5) *= 10) -= 6) /= 8) = %d\n", t);
	t %= 3;
	printf(" (((((t += 5) *= 10) -= 6) /= 8) %%= 3) = %d\n", t);
	return 0;
}