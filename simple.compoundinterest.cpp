#include<stdio.h>
int main()
{
	int P,T,R,S,C;
	printf("Enter Principalamount\n");
	scanf("%d",&P);
	printf("Enter Rate of interest per annum\n");
	scanf("%d",&R);
	printf("Enter required Time\n");
	scanf("%d",&T);
	S=P*T*R/100;
	C=P*((1+R/100),T);
	printf("Simleinterest of the given data is:%d\n",S);
	printf("Compoundinterest of the given data is:%d",C);
	
}
