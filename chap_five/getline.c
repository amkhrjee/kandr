#include<stdio.h>
int get_line(char *s, int max){
	int c; 
	char *t = s; 
	while(--max > 0 && ((c = getchar()) != EOF && c != '\n'))
		*(s++) = c;
	if(c == '\n')
		*(s++) = c; 
	*s = '\0'; 
	return (s-t); 
}

