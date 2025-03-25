#include<stdio.h>
#include<math.h>
int power(int base,int exp){
	if(exp==0)
		return 1;
	else
		return base*power(base,(exp-1));
}
int main(){
	int base, exp;
	printf("Enter base value: ");
	scanf("%d",&base);
	printf("Enter exponent value: ");
	scanf("%d",&exp);
	printf("the result: %d\n", power(base,exp));
	return 0;
}
