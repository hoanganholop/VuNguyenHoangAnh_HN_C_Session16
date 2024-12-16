#include<stdio.h>

int main(){
	int y=10;
	int *yPtr=&y;
	printf("Gia tri cua y: %d\n", y);
	printf("Gia tri cua y: %d\n", *yPtr);
	printf("Dia chi cua y: %lu\n", (unsigned long)yPtr);
	printf("Dia chi cua y: %lu\n", (unsigned long)&y);
	return 0;
}
