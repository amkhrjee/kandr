#include<stdio.h>
#include<string.h>
#define MAXLINE 1000

int get_line(char *line, int max);  
int main(int argc, char *argv[]){
	char line[MAXLINE];
	int found = 0; 

	if(argc != 2)
		printf("Usage: find patter\n"); 
		else
			while(get_line(line, MAXLINE) > 0)
				if(strstr(line, argv[1]) != NULL){
					printf("%s", line);
					found++; 
				}
	printf("%d matches found\n", found);
	return found; 
}
// strstr(s, t) => returns a pointer to the first occurence of the string t in string s, or NULL if there is none. 
