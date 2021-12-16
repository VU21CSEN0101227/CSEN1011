# include <stdio.h>
int main() 
{
int a,b,c,d,e,totalaverage,percent;
printf("Marks in first subject:\n");
scanf("%d", &a);
printf("Marks in second subject:\n");
scanf("%d", &b);
printf("Marks in third subject:\n");
scanf("%d" , &c);
printf("Marks in fourth subject:\n");
scanf("%d", &d);
printf("Marks in fifth subject:\n");
scanf("%d", &e);
totalaverage=(a+b+c+d+e)/5;
percent=((a+b+c+d+e)*100)/500;
 printf("The average of the given marks is:%d\n",totalaverage);
 printf("The percentage of the given marks is:%d",percent);
}
