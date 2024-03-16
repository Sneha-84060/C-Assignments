#include<stdio.h>
int main()
{
int num1, num2;
printf("Enter num1:");
scanf("%d",&num1);

printf("Enter num2:");
scanf("%d",&num2);

if(num2!=0)
  printf("Division = %.2d\n",num1/num2);
else
  printf("division by zero is not possible\n");
return 0;
}
