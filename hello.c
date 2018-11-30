#include<stdio.h>
int main() 
{	
	int price = 0;
	printf("你给了售货员100元\n");
	scanf("%d",&price);
	printf("找给你%d元",100-price);
	return 0;
}
