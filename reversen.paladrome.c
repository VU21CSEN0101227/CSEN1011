#include<stdio.h>
int main()
{
	int n,sum,r,n1;
	printf("Enter any number:");
	scanf("%d",&n);
	sum=0;
	n1=n;
	while(n!=0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	printf("The reverse of the given number is:%d",sum);
	if(n1==sum)
	{
	    printf("\nThe given number is a paladrome number");
    }
	else
	{
	    printf("\nThe given number is not a paladrome number");
    }
}
