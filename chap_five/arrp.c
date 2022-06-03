#include<stdio.h>
int main(){
	int a[2] = {2, 3};
//	int *ptr;
//	ptr = a;

	printf("%d\n", *a);
	printf("%d\n", *(a+1));
//	printf("%d <----- Garbage Value\n", *(ptr+2));
}

