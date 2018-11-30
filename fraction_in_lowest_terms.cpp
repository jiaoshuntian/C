//分数可以表示为“分子/分母”的形式。
//编写一个程序，要求用户输入一个分数，然后将其约分为最简分式。
#include<stdio.h>

int gcd(int numerator, int denominator)
{
	int temp;
	while(denominator != 0){
		temp = numerator%denominator;
		numerator = denominator;
		denominator = temp;
	}
	return numerator;
}

int main()
{
	int numerator;//分子 
	int denominator;//分母
	
	scanf("%d/%d",&numerator,&denominator);
	int gcdNum = gcd(numerator,denominator);
	numerator = numerator/gcdNum;
	denominator = denominator/gcdNum;
	
	printf("%d/%d",numerator,denominator);
	return 0;
}
