#include<stdio.h>
int main(){
	int angle1, angle2, angle3, angle_sum;
	printf("Enter 3 angles: ");
	scanf("%d,%d,%d", &angle1, &angle2, &angle3);
	angle_sum=angle1+angle2+angle3;
	if (angle_sum==180){
		printf("Valid Triangle\n");
	} else {
		printf("Invalid Triangle\n");
		}
	return 0;
}
