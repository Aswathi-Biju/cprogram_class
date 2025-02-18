#include<stdio.h>
int main(){
	int row1, row2, col1, col2, i,j;
	printf("Enter values for row1 and col1:\n");
	scanf("%d\n%d",&row1,&col1);
	printf("Enter values for row2 and col2:\n");
	scanf("%d\n%d",&row2,&col2);
	int A[row1][col1];
	printf("Enter values for matrix 1\n");
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("Values for matrix 1\n");
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	int B[row2][col2];
	printf("Enter values for matrix 2\n");
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			scanf("%d",&B[i][j]);
		}
	}
	printf("Values for matrix 2\n");
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
	int C[10][10];
	if(row1!=row2 && col1!=col2){
		printf("Invalid matrix for addition\n");
	} else{
		printf("Matrix Addition:\n");
		for(i=0;i<row1;i++){
			for(j=0;j<col1;j++){
				C[i][j]=A[i][j]+B[i][j];
			}
		}
		for(i=0;i<row1;i++){
			for(j=0;j<col1;j++){
				printf("%d\t",C[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
