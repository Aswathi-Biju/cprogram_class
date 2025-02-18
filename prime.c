#include<stdio.h>
int main(){
	int num,i=2;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=2;i>=num-1;i++){
	}
	if (num%i!=0){
		printf("Prime\n");
	}else{
		printf("Not prime\n");
	}
	return 0;	
	}

