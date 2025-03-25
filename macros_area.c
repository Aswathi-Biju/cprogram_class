#include<stdio.h>
#define pi 3.14159
#define area_of_circle(r) (pi*r*r)
#define surface_area_of_cylinder(r,h) (2*pi*r*(r+h))
int main(){
	float r,h,circle,cylinder;
	printf("Enter the radius for circle and cylinder: ");
	scanf("%f",&r);
	printf("Enter the height for cylinder: ");
	scanf("%f",&h);
	circle=area_of_circle(r);
	cylinder=surface_area_of_cylinder(r,h);
	printf("The area of circle is %.2f \n",circle);
	printf("The surface area of cylinder is %.2f \n",cylinder);
	return 0;
}

