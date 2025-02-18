#include<stdio.h>
int main(){
	int num, i, factorial;
	printf("Enter a number: ");
	scanf("%d",&num);
	factorial=1;
	i=num;
	while(i>1){
		factorial=factorial*i;
		i--;
	}
	printf("Factorial of %d is %d\n", num, factorial);
	return 0;
}
