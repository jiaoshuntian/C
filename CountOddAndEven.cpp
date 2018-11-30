#include<stdio.h>

int main()
{
	int countOdd = 0;
	int countEven = 0;
	int number;
	
	while(1) {
		scanf("%d",&number);
		if(number == -1){
			break;
		}
		else if(number%2 == 0){
			countEven++;
		} else {
			countOdd++;
		}
	}
	printf("%d %d",countOdd,countEven);
	return 0;
}
