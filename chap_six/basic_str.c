#include<stdio.h>

int main(){
	struct point {
		int x;
		int y;
	};

	struct point pt = { 1, 2}; 
	printf("%d %d", pt.x, pt.y); 
	return 0;
}
