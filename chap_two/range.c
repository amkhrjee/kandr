#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(){
	// Unsigned types
	printf("======UNSIGNED TYPES======\n");
	printf("Char : %d to %d\n", 0, UCHAR_MAX);
	printf("Int : %d to %d\n", 0, UINT_MAX);
	printf("Short : %d to %d\n", 0, USHRT_MAX);
	printf("Long : %d to %ld\n", 0, ULONG_MAX);
}
