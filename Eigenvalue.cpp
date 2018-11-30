#include<stdio.h>
#include<math.h>

int main()
{
	int number;
	int result = 0;
	int digit = 0;
	int digitNum;
	int powResult =1;
	
	scanf("%d",&number);
	while(number != 0) {
		digit++;
		digitNum = number%10;
		number = number/10;
		if(digitNum%2 == digit%2){
			if(digit !=1){
				powResult =1;
				for(int i =0;i<digit-1;i++){
					powResult = 2*powResult;
				}
			} else {
				powResult =1;
			}
			result =result + powResult;
		}
	}
	printf("%d",result);
	
	return 0;
}
