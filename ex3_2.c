// lab2 ex3
#include <stdio.h>
#define ROWS 4
#define COLS 8
#define DOL '$'
int main(void){
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLS; j++){
			printf("%c", DOL);
		}
	printf("\n");
	}
	return 0;
}