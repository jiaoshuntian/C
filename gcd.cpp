/*
求最大公约数，辗转相除法
1如果b等于0，计算结束，a就是最大公约数
2否则，计算a除以b的余数，让a等于b，让b等于那个余数
3回到第一步 
a	b	t
12  18  12
18  12  6
12  6   0
6   0
*/
#include <stdio.h>
int main()
{
	int a,b;
	int t;
	scanf("%d %d",&a,&b);
	
	while(b != 0){
		t = a%b;
		a = b;
		b = t;
	}
	printf("gcd = %d\n",a);
}
