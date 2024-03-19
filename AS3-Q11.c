//a program to find factorial of given number.


#include<stdio.h>
int main()
{
int num,fact=1;
printf("Enter no.");
scanf("%d",&num);

for(int i=1;i<=num;i++)
fact=fact*i;
printf("Factorial=%d\n",fact);

return 0;
}
