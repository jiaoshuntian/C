/*
�����Լ����շת�����
1���b����0�����������a�������Լ��
2���򣬼���a����b����������a����b����b�����Ǹ�����
3�ص���һ�� 
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
