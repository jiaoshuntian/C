#include<stdio.h>

int main()
{ 
	int startNum;
	int endNum;
	scanf("%d %d",&startNum,&endNum);
	int count = 0;
	int sum = 0;
	
	for( int x = 2; count < endNum; x++ )
	{
		int isPrime =1; //1������������0����������
		for( int i=2; i<x; i++ ){
			if( x%i == 0) {
				isPrime = 0;
				break;	
			}
		}
		if(isPrime == 1) { 
			count++;
			if(count >= startNum){
				sum = sum + x;
			}
			//printf("%d�ǵ�%d������\n",x,count);
		}
	}
	printf("%d\n",sum);
	
	return 0;
}
