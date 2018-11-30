#include<stdio.h>

int search(int key, int a[], int len)
{
	int ret = -1;
	int left = 0;
	int right = len-1;
	while( left < right )
	{
		int mid = (left+right)/2;
		if(a[mid] == key){
			ret = mid;
			break;
		} else if(a[mid] > key)
		{
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	return ret;
}

int main()
{
	int a[] = {3,1,2,1,9,9,3,3,9};
	int index = search(2,a,sizeof(a)/sizeof(a[0]));
	printf("index = %d",index);
	return 0;
}
