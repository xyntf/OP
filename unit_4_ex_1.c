#include <stdio.h>
#include <stdlib.h>
int ects(int r);
int main(int argc, char *argv[]){
	//printf(" Enter R: ");
	//int r;
	//scanf("%d", &r);
	printf(" Number: %s Your ECTS: %c\n", argv[1], ects(atoi(argv[1])));
	return 0;
}

int ects(int r){
	if(r > 94 && r <= 100){
		return 'A';
	} else if(r > 84 && r < 95){
		return 'B';
	} else if(r > 74 && r < 85){
		return 'C';
	} else if(r > 64 && r < 75){
		return 'D';
	} else if(r > 59 && r < 65){
		return 'E';
	} else if(r >= 0 && r < 60){
		return 'F';
	} else{
		printf(" N/A, enter value between 0 and 100\n");
		return 'N';
	}
}