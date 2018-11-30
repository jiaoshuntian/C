#include<stdio.h>
int main()
{
	int number = 0;
	int n = 0;
	scanf("%d",&number);
	while(number > 0 ){
		number = number/10;
		n++;
	}
	printf("%d\n",n);
	return 0;
}
