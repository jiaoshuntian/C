//�������Ա�ʾΪ������/��ĸ������ʽ��
//��дһ������Ҫ���û�����һ��������Ȼ����Լ��Ϊ����ʽ��
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
	int numerator;//���� 
	int denominator;//��ĸ
	
	scanf("%d/%d",&numerator,&denominator);
	int gcdNum = gcd(numerator,denominator);
	numerator = numerator/gcdNum;
	denominator = denominator/gcdNum;
	
	printf("%d/%d",numerator,denominator);
	return 0;
}
