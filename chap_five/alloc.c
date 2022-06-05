#include<stdio.h>
#define ALLOCSIZE 1000

//buffer for the memory stack
static char allobuf[ALLOCSIZE];
static char *allocp = allocbuf; 

char *alloc(int n){
	if(allocbuf + ALLOCSIZE - allocp >=n){
		allocp += n;
		return allocp - n; //old p
	}else
		return 0; 
}

void afree(char *p){
	if(p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p; 
}
