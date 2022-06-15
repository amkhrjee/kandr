#include<stdio.h>
#include"stdday.h"
int main(){
	int yearday = 69; 
	int year = 2020;  
	int m = 4;
	int d = 23; 
	int month, day; 
	
	printf("Day of year = %d\n", day_of_year(year, m, d)); 
	month_day(year, yearday, &month, &day); 

	printf("%d day of %d month", day, month); 
	return 0;
}

