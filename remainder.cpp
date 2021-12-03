#include<stdio.h>
int main()
{
	int num,divisor,remainder;
	printf("Enter an integer:");
	scanf("%d",&num);
	printf("Enter divisor:");
	scanf("%d",&divisor);
	while(num >= divisor)
	{
		num=num-divisor;
	}
	num=remainder;
	printf("The remainder of the given integer is:%d",remainder);
}
