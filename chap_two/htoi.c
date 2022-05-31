#include<stdio.h>
#include<string.h>
int htoi(char s[]){
	int i = 0;
	int n = 0;
	if(s[i] == 0)
		++i;
	if(s[i] == 'x' || s[i] == 'X')
		++i;
	for(;i<strlen(s); ++i){
		if(s[i] >= '0' && s[i] <= '9')
			n = n*16 + (s[i] - '0'); 
		else if(s[i] >= 'a' && s[i] <='f')
			n = n*16 + (s[i] - 'a' + 10);
		else if(s[i] >= 'A' && s[i] <='F')
			n = n*16 + (s[i] - 'A' + 10);
	}
	return n; 
}
			
int main(){
	char str[]="0xf69"; 
	printf("The integer value is: %d", htoi(str));
	return 0;
}
		
