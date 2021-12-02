#include <stdio.h>
int main()
{
	
	int basic,da,hra,ta,others;
	int pf,it;
	int net_salary;
	printf("Enter Basic Salary: ");
	scanf("%d",&basic);
	printf("Enter HRA: ");
	scanf("%d",&hra);
	printf("Enter TA: ");
	scanf("%d",&ta);	
	printf("Enter others: ");
	scanf("%d",&others);	
	da = (basic*12)/100;
	pf = (basic*14)/100;
	it = (basic*15)/100;
	net_salary = basic + da + hra + ta + others - (pf+it);
	printf("Net Salary is: %d\n",net_salary);
}
