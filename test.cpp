#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	struct date {
		int year;
		int month;
		int day;
	};
	
	struct date today;
	
	today.year = 2018;
	today.month = 5;
	today.day = 23;
	
	printf("Today's date is %i-%i-%i.\n",today.year,today.month,today.day);
	
	return 0;
}









