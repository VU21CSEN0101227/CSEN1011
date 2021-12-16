/* To check whether the given number is armstrong or not */
#include<stdio.h>
int main()
{
 int num,num1,remainder,sum;
 printf("Enter any three digit number:");
 scanf("%d",&num);
 sum=0;
 num1=num;
    while(num>0)
    {
    	remainder=num%10;
    	sum=sum+(remainder*remainder*remainder);
    	num=num/10;	
    }
	if(num1==sum)
	{
		printf("The given number is armstrong number");
	}
	else
	{
		printf("The given number is not a armstrong number");
	}
}
/*output
Enter any three digit number:153
The given number is armstrong number*/
