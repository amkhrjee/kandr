#include<stdio.h>
int main(){
	char *pmsg;
	pmsg = "hello world";
	printf("%p\n", pmsg);
	printf("%c", *pmsg);
}

