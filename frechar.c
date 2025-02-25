#include<stdio.h>
#include<string.h>
int main(){
	char string[50];
	int i,j,length, count;
	printf("Enter the string\n");
	scanf("%[^\n]",string);
	length=strlen(string);
	for(i=0;i<length;i++){
		count=1;
		if(string[i]!='\0'){
			for(j=i+1;j<length;j++){
				if(string[i]==string[j]){
					count++;
					string[j]='\0';
				}
			}
		}
		if(string[i]!='\0'){
			printf("The frequency of %c : %d\n", string[i],count);
		}
	}
	return 0;
}
