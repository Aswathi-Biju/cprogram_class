#include<stdio.h>
int main(){
	int n, i, max, min, max_pos, min_pos;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int array[n];
	printf("Enter the elmental values: \n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	printf("The value of arrays are: \n");
	for(i=0;i<n;i++){
		printf("%d \t", array[i]);
	}
	printf("\n");
	int array_copy[n];
	printf("The value of reverse arrays are: \n");
	for(i=0;i<n;i++){
		array_copy[i]=array[i];
	}
	for(i=0;i<n;i++){
		printf("%d \t", array_copy[i]);
	}
	printf("\n");
	return 0;
}
