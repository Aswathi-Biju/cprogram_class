#include<stdio.h>
void swap(int a,int b);
int main(){
	int a,b;
	printf("Enter two values:\n");
	scanf("%d,%d",&a,&b);
	printf("Before swapping, a=%d and b=%d\n",a,b);
	swap(a,b);
	return 0;
}
void swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swapping, a=%d and b=%d\n",a,b);
}
