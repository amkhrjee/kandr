#include<stdio.h>
int bitcount(unsigned x){
	int b; 
	for(b=0; x!=0; x>>=1){
		if(x & 01)
			b++;
	}
	return b; 
}
int main(){
	int y; 
	y = bitcount(5); 
	printf("%d\n", y);
	return 0; 
}

