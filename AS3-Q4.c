#include<stdio.h>
int main()
{

int num,fact=1;

printf("Enter a no.:");
scanf("%d",&num);

int i=1;
while(i<=num)
{
fact=fact*i;
i++;
}

printf("factorial of a no. %d = %d\n",num,fact);

return 0;
}
