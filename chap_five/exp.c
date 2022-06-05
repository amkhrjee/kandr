#include<stdio.h>
int main(){
	volatile unsigned char *ptr = (unsigned char *)0x7ffe9fe88f88;
	*ptr = 'a'; //gives segfault
	printf("%p", ptr);  
	printf("%c", *ptr);  
	return 0;
}

