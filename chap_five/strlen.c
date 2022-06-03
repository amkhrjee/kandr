#include<stdio.h>
int strlen(char *);
int main(){
	char str[] = "hello world";
	printf("length of string = %d", str_len(str)); 
	return 0;
}

int str_len(char *s){
	int n;
	for(n=0; *s != '\0'; s++)
		n++; 
	return n; 
}

/* here we can do s++ as s is a pointer 
and doing s++ merely increases the str_len's private copy 
of the pointer. */ 
