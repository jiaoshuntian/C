#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int matrixn[n][n];
	int rowMark;
	int colMark;
	int point;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&matrixn[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		point = 0;
		for(int j=0;j<n;j++){
			if(matrixn[i][j] > point){
				rowMark = i;
				colMark = j;
				point = matrixn[i][j];
			}
		}
		for(int k=0;k<n;k++){
			if(matrixn[k][rowMark] > point){
				point = 0;
			}
		}
		if(point ==0){
			break;
		}
	}
	if (point != 0){
		printf("NO");
	} else {
		printf("%d %d",rowMark,colMark);
	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			printf("%d\t",matrixn[i][j]);
//		}
//		printf("\n");
//	}
	
	return 0;
}
