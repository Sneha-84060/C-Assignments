#include<stdio.h>
int main()
{
int a,b,sum,diff,product;

printf("Enter num1:");
scanf("%d",&a);

printf("Enter num2:");
scanf("%d",&b);

sum = a+b;
diff=a-b;
product=a*b;

printf("Sum = %d\nDifference = %d\nProduct = %d\n",sum,diff,product);
return 0;
}

