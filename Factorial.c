/*Algorithm 
Step 1  -START
Step 2 - Enter the value of Fact.
Step 3 -From value fact upto 1 multiply each digit.
Step 4 - The final value is factorial Number.
Step 5 -STOP*/


#include<stdio.h>
int main() 
{
  int i, Digit, fact = 1;
  printf("Enter a number to calculate its factorial : ");
  scanf("%d", &Digit);
  for (i = 1; i <= Digit; i++)
    fact = fact * i;
    printf("Factorial of %d = %d\n", Digit, fact);
    return 0;
}
