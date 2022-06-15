#include<stdio.h>
void str_cpy(char *s, char *t){
	while(*s++ = *t++)
		continue;  
}

int main(){
	char arr[] = "helloworld"; 
	char copy[100]; 
	str_cpy(copy, arr); 
	printf("%s\n", arr); 
	printf("%s", copy); 

	return 0; 
}


