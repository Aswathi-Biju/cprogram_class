#include<stdio.h>
#define swap(a,b) (temp=a,a=b,b=temp)
int main(){
	int a, b, temp;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("Before swapping a=%d and b=%d\n", a,b);
	swap(a,b);
	printf("After swapping a=%d and b=%d\n", a,b);
	return 0;
}
