#include<stdio.h>

struct salary{
	int basicpay;
	int bonus;
	int deduction;
};
struct employee {

	int id;
	char name[50];
	struct salary sal;
};



void netsal(struct employee emp[], int id){
	int netsalary = emp[0].sal.basicpay + emp[0].sal.bonus - emp[0].sal.deduction;
	printf("The net salary of employee %s with id %d is %d\n" ,emp[0].name, id, netsalary);
	return;
}

void detail(struct employee emp[], int id){
	printf("The employee %s with id %d has:\n",emp[0].name, id);
	printf("Basic pay = %d\n" ,emp[0].sal.basicpay);
	printf("Bonus = %d\n" ,emp[0].sal.bonus);
	printf("Deductions = %d\n" ,emp[0].sal.deduction);
	return;
}

int main(){
	int ch,id;
	int count =1;
	struct employee emp[50]; 

	printf("Enter the name of employee :\n");
	scanf("%[^\n]",emp[0].name);
	getchar();
	printf("Enter the id of employee :\n");
	scanf("%d" ,&emp[0].id);
	printf("Enter the basicpay of employee :\n");
	scanf("%d" ,&emp[0].sal.basicpay);
	printf("Enter the bonus of the employee :\n");
	scanf("%d",&emp[0].sal.bonus);
	printf("Enter the deductions of the employee :\n");
	scanf("%d",& emp[0].sal.deduction);
	
	do{
		printf("Enter your choice:\n");
		printf("press:\n");
		printf("1. To calculate net salary.\n");
		printf("2. To display employee salary details.\n");
		printf("3.To exit.\n");
		scanf("%d" ,&ch);
		switch(ch){
			case 1:
				printf("Enter the employee id for which you want to calculate net salary :\n");
				scanf("%d" ,&id);
				netsal(emp, id);
				break;
			case 2:
				printf("Enter the employee id for which you want to display salary details :\n");
				scanf("%d" ,&id);
				detail(emp, id);
				break;
			case 3:
				printf("Exiting....Thank You~~\n");
				break;
			default:
			printf("Invalid choice!");
		}
	}while(ch!=3);
	return 0;
}