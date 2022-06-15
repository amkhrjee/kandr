#include<stdio.h>
char *month_name(int);
int main(){
	int n; 
	printf("Enter the number: "); 
	scanf("%d", &n); 

	char *mname = month_name(n); 

	printf("The month is = **%s**", mname); 
	return 0;
}

