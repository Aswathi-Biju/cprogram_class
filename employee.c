#include<stdio.h>
struct Employee{
	char name[50];
	int ID;
	float salary;
};
int main(){
	int n,i;
	printf("Enter the no. of Employees: ");
	scanf("%d",&n);
	struct Employee detail[n];
		for(i=1;i<=n;i++){
			printf("Enter details for Employee %d:\n",i);
			printf("Name: ");
			scanf("%s", detail[i].name);
			printf("ID: ");
			scanf("%d", &detail[i].ID);
			printf("Salary: ");
			scanf("%f", &detail[i].salary);
		}
		printf("Employee Details:\n");
		printf("Name:\t ID:\t Salary:\n");
		for(i=1;i<=n;i++){
			
			printf("%s\t %d\t $%.2f\n",detail[i].name,detail[i].ID,detail[i].salary);

		}
	return 0;
}

