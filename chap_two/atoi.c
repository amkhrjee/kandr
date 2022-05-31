#include<stdio.h>
int main(){
	char s[] = "42069";
	int i,n;
	n = 0; 
	for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10*n + (s[i] - '0');
	printf("%d",n);
}
