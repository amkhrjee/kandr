#include<stdio.h>
int main(){
	int arr[10];
	int i; 
	int *ptr = arr; 
	int v = 2; 
	
	for(;ptr < &arr[10];ptr++)
		*ptr = v++; 

	for(i=0; i<10; i++)
		printf("%d\t", arr[i]);
	
	return 0;
}

