#include<stdio.h>
//argv is an array of char pointers
int main(int argc, char *argv[]){
	while(--argc > 0){
		printf("%s%s", *++argv, (argc > 1) ? " " : ""); 
		printf("\n"); 
	}
	return 0;
}

