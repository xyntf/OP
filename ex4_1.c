// lab1 ex4
#include <stdio.h>
#define BOOK "Kobzar"
int main(void){
	float cost = 9.49;
	float percent = 80.0;
	printf("This copy of \"%s\" sells for $%1.2f.\nThat is %.0f%% of list.\n", BOOK, cost, percent);
	return 0;
}