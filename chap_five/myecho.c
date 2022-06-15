#include<stdio.h>
//argv is an array of char pointers
int main(int argc, char *argv[]){
	while(--argc > 0)
		printf((argc > 1) ? "%s " : "&s", *++argv); 
	printf("\n"); 
	return 0;
}

