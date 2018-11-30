#include<stdio.h>

int main()
{
	const int maxLength = 200;
	int divisor;
	int dividend;
	
	scanf("%d/%d",&dividend,&divisor);
	printf("0.");
	for(int i=1; i<=maxLength; i++){
		printf("%d",dividend*10/divisor);
		dividend = dividend*10%divisor;
		if(dividend == 0)
			break;
	}
	return 0;
}
