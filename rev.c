#include<stdio.h>
int main(){
	int num, or_num,rem,rev;
	printf("Enter a number: ");
	scanf("%d", &num);
	or_num=num;
	for(rev=0;num!=0;num=num/10){
		rem=num%10;
		rev=rev*10+rem;
	}
	printf("Reverse of %d is %d\n", or_num, rev);
	return 0;
}
