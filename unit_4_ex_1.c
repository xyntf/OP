#include <stdio.h>
int ects(int r);
int main(void){
	printf(" Enter R: ");
	int r;
	scanf("%d", &r);
	printf(" Number: %d Your ECTS: %c\n", r, ects(r));
	return 0;
}

int ects(int r){
	if(r > 94 && r <= 100){
		return 65;
	} else if(r > 84 && r < 95){
		return 66;
	} else if(r > 74 && r < 85){
		return 67;
	} else if(r > 64 && r < 75){
		return 68;
	} else if(r > 59 && r < 65){
		return 69;
	} else if(r >= 0 && r < 60){
		return 70;
	} else{
		printf(" N/A, enter value between 0 and 100\n");
		return 78;
	}
}