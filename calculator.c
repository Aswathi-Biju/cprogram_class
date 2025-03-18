#include<stdio.h>
int addition(int, int);
int subtract(int, int);
int multiplication(int, int);
int division(int, int);
int main(){
	int num1, num2;
	printf("Enter two nos.\n");
	scanf("%d,%d",&num1,&num2);
	printf("Addition Result:%d\n",addition(num1,num2));
	printf("Subtraction Result:%d\n",subtract(num1,num2));
	printf("Multiplication Result:%d\n",multiplication(num1,num2));
	printf("Division Result:%d\n",division(num1,num2));
	return 0;
}
int addition(int num1, int num2){
	return num1+num2;
}
int subtract(int num1, int num2){
	return num1-num2;
}
int multiplication(int num1, int num2){
	return num1*num2;
}
int division(int num1, int num2){
	if(num2!=0){
		return (int)num1/num2;
	}else{
		return printf("Division not possible\n");
	}
}
