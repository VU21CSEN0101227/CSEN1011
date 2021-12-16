// half pyramid of numbers
#include<stdio.h>
int main()
{
	int i,j,r;
	printf("Enter number of rows:");
	scanf("%d",&r);
	for(i=1;i<=r;++i)
	{
		for(j=1;j<=i;++j)
		{
			printf("%d",j);
		}
		printf("\n");	
	}
}
/*output:
enter number of rows:3
1
12
123*/
