#include<stdio.h>
int main(){
	int num1,num2,sum,diff,mul,mod;
	float div;
	char op;
	printf("Enter 2 numbers: ");
	scanf("%d,%d", &num1,&num2);
	printf("Enter an operator: ");
	scanf(" %c", &op);
	switch(op){
	case '+':
		sum=num1+num2;
		printf("The result is %d\n", sum);
		break;
	case '-':
		diff=num1-num2;
		printf("The result is %d\n", diff);
		break;
	case '*':
		mul=num1*num2;
		printf("The result is %d\n", mul);
		break;
	case '/':
		if (num2==0){
			printf("Number is 0\n");
			}else{
				div=(num1/num2);
				printf("The result is %.2f\n", div);
		}break;
	case '%':
		mod=(num1%num2);
		printf("The result is %d\n", mod);
		break;
	default:
		printf("Invalid operator\n");
	}
	return 0;
	}

