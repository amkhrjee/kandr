#include<stdio.h>
#include<string.h>
#define MAXLINE 1000
int get_line(char *line, int max); 
int main(int agrc, char *argv[]){
	char line[MAXLINE];
	long lineno = 0; 
	int c, except = 0, number = 0, found = 0; 

	while(--argc > 0 && (*++argv)[0] == '-')
		while(c = *++argv[0])
			switch c {
				case 'x': 
}

