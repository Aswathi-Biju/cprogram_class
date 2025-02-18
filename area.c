#include<stdio.h>
int main(){
	int radius;
	float pi, area;
	pi=3.14;
	printf("Enter radius: ");
	scanf("%d", &radius);
	area= pi*radius*radius;
	printf("Area of the circle is %.2f \n", area);
	return 0;
}
