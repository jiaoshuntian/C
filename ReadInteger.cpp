#include<stdio.h>

int main()
{
	int number;
	scanf("%d",&number);
	
	if(number<0){
		printf("fu ");
		number /= -1;
	}
	
	switch(number){
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		case 9:
			printf("jiu");
			break;	
		case 0:
			printf("ling");
			break;								
	}
	return 0;
}
