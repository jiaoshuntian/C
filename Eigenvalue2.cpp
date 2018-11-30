#include<stdio.h>
#include<math.h>

int main()
{
	int number;
	int result = 0;
	int digit = 0;
	int digitNum;
	
	scanf("%d",&number);
	while(number != 0) {
		digit++;
		digitNum = number%10;
		number = number/10;
		if(digitNum%2 == digit%2){
			result =result + pow(2,digit-1);
		}
	}
	printf("%d",result);
	
	return 0;
}
