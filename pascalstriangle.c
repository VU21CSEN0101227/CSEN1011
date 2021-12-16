// pascals triangle
#include<stdio.h>
int main()
{
	int n,i,j,c,s;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=1;s<=n-i;s++)
		printf(" ");
			for(j=0;j<=i;j++)
			{
				if(j==0||i==0)
					c=1;
				else
					c=c*(i-j+1)/j;
					printf("%d ",c);
		    }
		    printf("\n");
	}
}
/*output
Enter number of rows:3
  1
 1 2 1
1 3 3 1*/
