#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter first numbers: ");
	scanf("%d",&num1);
	printf("Enter second numbers: ");
	scanf("%d",&num2);
	(num1>num2)? (printf("%d is greater than %d\n", num1, num2)):(printf("%d is greater than %d\n", num2, num1));
	return 0;
}
