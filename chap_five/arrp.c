#include<stdio.h>
int main(){
	int a[2] = {2, 3};
//	int *ptr;
//	ptr = a;

	printf("%d\n", *a);
	printf("%d\n", *(a+1));
//	printf("%d <----- Garbage Value\n", *(ptr+2));
	&a[1] == (a+1) ? printf("They are equal!") : printf("Not equal"); 
	//int j;
	//a = j;  
	printf("The value of ++a  = %x", ++a);
}

