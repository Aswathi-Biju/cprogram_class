#include<stdio.h>
int arr_sum(int arr[], int size);
int main(){
	int i,size;
	printf("Enter the size for array:\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter values for the array\n");
	for (i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Array element\n");
	for (i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	int result=arr_sum(arr,size);
	printf("The sum is %d\n",result);
	return 0;
}
int arr_sum(int arr[], int size){
	int sum=0;
	for (int i=0;i<size;i++){
		sum+=arr[i];
	}
	return sum;
}
