#include<stdio.h>
int main(){
	char value;
	printf("Enter a character value: ");
	scanf(" %c", &value);
	printf("The ASCII value of %c is %d \n", value, value);
	return 0;
}
