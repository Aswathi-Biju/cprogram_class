#include<stdio.h>
int main() {
	int roll_no, age;
	float height;
	char grade;
	printf("Enter roll no: ");
	scanf("%d",&roll_no);
	printf("Enter age:");
	scanf("%d", &age);
	printf("Enter the height in cm: ");
	scanf("%f", &height);
	printf("Enter the grade: ");
	scanf(" %c", &grade);
	printf("The roll number is %d, age is %d, height is %.1f cm, grade is %c \n", roll_no, age, height, grade);
	return 0;
}
