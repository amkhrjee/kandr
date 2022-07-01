#include<stdio.h>
#define XMAX 100
#define YMAX 100

struct point makepoint(int, int); 

struct point{
	int x;
	int y; 
}; 

struct rect{
	struct point p1;
	struct point p2;
}; 

struct rect screen; // <- Just a var declaration 

screen.p1 = makepoint(0, 0); 
screen.p2 = makepoint(XMAX, YMAX);  


int main(){
	printf("X coordinate of P1 of Screen -> %d", screen.p1.x); 
	return 0; 
}

struct point makepoint(int x, int y){
	struct point temp; 

	temp.x = x; 
	temp.y= y;
	return temp; 
}
