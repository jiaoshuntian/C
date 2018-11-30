#include<stdio.h>

int main()
{
	int n;
	
	scanf("%d",&n);
	for(int i=1; i<n;i+=2){
		if(i!=1){
			printf(" ");
		}
		printf("%d",i);
	}
	if (n ==1) {
		printf("1");
	}
	else if (n%2 != 0){
		printf(" %d",n);
	}
	return 0;
}
