#include<stdio.h>
#include<string.h>
int main(){
	char str1[50],str2[50];
	int i;
	printf("Enter string1:\n");
	scanf("%s",str1);
	printf("Enter string2:\n");
	scanf("%s",str2);
	if(strcmp(str1,str2)==0){
		printf("Both the strings are same\n");
	}else{
		printf("Both the strings are not same\n");
	}
	return 0;
}
