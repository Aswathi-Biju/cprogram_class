#include<stdio.h>
int main(){
	int num, i, factorial;
	printf("Enter a number: ");
	scanf("%d",&num);
	if (num==0){
		factorial=1;
	}
	else if (num<0){
		printf("Error\n");
	}
	else
	{
	factorial=1;
	i=num;
	while(i>1){
		factorial=factorial*i;
		i--;
	}
	}
	printf("Factorial of %d is %d\n", num, factorial);
	return 0;
}
