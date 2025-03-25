#include<stdio.h>
int fib(int num){
	if(num==0){
		return 0;
	}else if(num==1){
		return 1;
	}else{
		return fib(num-1)+fib(num-2);
	}
}
int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("The Fibonacci series of %d terms: ",num);
	for(int i=0;i<num;i++){
		printf("%d\t",fib(num));
	}
	printf("\n");
	return 0;
}

