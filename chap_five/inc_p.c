#include<stdio.h>
int main(){
	int a;
	unsigned long val; 
	int *ptr = &a;
	printf("====INCREMENTING POINTER VALUES====\n");
	for(int i = 0; i < 10; i++){
		printf("ptr + %d = %p\n", i, ptr++); 
	}
	printf("The difference between two consecutive pointer value = %x", (ptr + 1) - ptr);	
	return 0;
}

