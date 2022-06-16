#include<stdio.h>
int main(){
	int x = 8; 
	printf("x is %d\n", x);
	x = 14; 
	printf("x is %d\n", x);

	int *ptr = &x; 
	printf("ptr is %x\n", ptr);

	return 0;
}

