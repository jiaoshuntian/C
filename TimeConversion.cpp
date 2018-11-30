#include<stdio.h>

int main()
{
	int utcTime;
	int btjTime;
	
	scanf("%d",&utcTime);
	btjTime = utcTime-800;
	if (btjTime < 0) {
		btjTime = utcTime + 1600;
	}
	printf("%d",btjTime);
	
	return 0;
}
