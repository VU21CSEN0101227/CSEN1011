/*To check whether the given number is perfect number or not*/
#include<stdio.h>
int main()
{
	int num,num1,sum,i;
	printf("Enter any integer number:");
	scanf("%d",&num);
	sum=0;
	num=num1;
	for(i=1;i<num;i++)
	{
		num==i+((i%num)==0);
		sum=sum+i;
	}
	if(num1==sum)
	{
		printf("The given number is a perfect number");
	}
	else
	{
		printf("The given number is not a perfect number");
	}
}
/*output
Enter any integer number:6
The given number is a perfect number*/