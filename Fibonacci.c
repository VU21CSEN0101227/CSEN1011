/* Algorithm
Step 1- Start
Step 2- enter how many numbers required
Step 3-put n1=0, n2=1
Step 4-Print First two terms of series
Step 5-use for loop n3=n1+n2;n1=n2;n2=n3;
Step 6-stop . */

#include<stdio.h>
int main()
{
  int n,n1,n2,n3,i;
  printf("Enter how many numbers required:");
  scanf("%d",&n);
  n1=0;
  n2=1;
  printf("%d ",n1);
  printf("%d ",n2);
  for(i=3;i<=n;i++)
  {
    n3=n1+n2;
    n1=n2;
    n2=n3;
    printf("%d ",n3);
  }
  return 0;
}
