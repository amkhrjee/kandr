#include<stdio.h>
int bitcount(unsigned x){
	int count = 0; 
	while(x != 0){
		x &= x-1; 
		count++;
	} 
	return count; 
}
int main(){
	printf("%d\n", bitcount(5));
	return 0; 
}

