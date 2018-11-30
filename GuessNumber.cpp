#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int number = rand()%100;
	int yourNumber;
	int count;
	
	while(1){
		scanf("%d",&yourNumber);
		count ++;
		if(yourNumber == number){
			printf("True!\n");
			printf("The number is %d\n",number);
			printf("You use %d times\n",count);
			break;
		}
		printf("False!\n");
		if(yourNumber > number){
			printf("Your number is bigger\n");
		}
		if(yourNumber < number){
			printf("Your number is smaller\n");
		}
	}
	return 0;
	
}
