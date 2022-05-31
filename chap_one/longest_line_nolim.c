#include<stdio.h>
#define MAXLINE 1000

int get_line(char line[], int max);
void copy(char from[], char to[]); 
//prints the longest line and controls flow 
int main(){
	char line[MAXLINE];
	char longest[MAXLINE];
	int len;
	int max;
	
	max = 0;
	while((len = get_line(line, MAXLINE)) > 0){
		if(len > max){
			max = len;
			copy(line, longest);
		}
	}
	if(max > 0){
		printf("The longest line is: \n");
		printf("%s", longest); 
	}
	return 0;
}

int get_line(char line[], int lim){
	int c, i;
	for(i=0; i<lim && (c=getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if(c == '\n'){
		line[i] = c;
		++i; 
	}else{
			while( (c = getcha)
	line[i] = '\0';
	return i;
}

void copy(char from[], char to[]){
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
