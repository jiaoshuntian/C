#include<stdio.h>

int main()
{
	int polynomial_1[101] = {};
	int polynomial_2[101] = {};
	int exponential;//指数 
	int coefficient;//系数 
	
	//多项式1赋值 
	while(1){
		scanf("%d %d",&exponential,&coefficient);
		polynomial_1[exponential] = coefficient;
		if(exponential == 0){
			break;
		}
	}
	
	//多项式2赋值 
	while(1){
		scanf("%d %d",&exponential,&coefficient);
		polynomial_2[exponential] = coefficient;
		if(exponential == 0){
			break;
		}
	}
	
	//遍历输出 
	/*
	 *多种情况 
	 *3x2+2x+1
	 *
	 *
	 *
	 *
	 */ 
	for(int i=100;i>=0;i--){
		coefficient = polynomial_1[i] + polynomial_2[i];
		if(coefficient != 0){
			if(i!=1 && i!=0){
				printf("%dx%d",coefficient,i);
			}
			if(i == 1 && coefficient !=1){
				printf("%dx",coefficient);
			}
			if(i == 1 && coefficient ==1){
				printf("x",coefficient);
			}
			if(i == 0){
				printf("%d",coefficient);
			}
		}
	}
	return 0;
}
