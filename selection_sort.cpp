#include<stdio.h>

int max(int a[], int len)
{
	int maxId = 0;
	for(int i=1;i<len;i++)
	{
		if( a[i] > a[maxId] )
		{
			maxId = i;
		}
	}
	return maxId;
}

int main()
{
	int a[] = {2,45,6,12,87,34,90,24,23,11,65};
	int len = sizeof(a)/sizeof(a[0]);
	//Ñ¡ÔñÅÅÐò 
	for(int i=len-1;i>0 ;i--)
	{
		int maxId = max( a, i+1);
		//swap a[maxId],a[len-1]
		int temp = a[maxId];
		a[maxId] = a[i];
		a[i] = temp;
	}
	for(int i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
