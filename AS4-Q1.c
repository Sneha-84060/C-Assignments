//Write a function to calculate factorial of a given number.

#include<stdio.h>

int accept(void);
int fact1(int a);

int main()
{
  int a;
  a = accept();
int res = fact1(a);
  printf("Factorial of %d = %d\n",a,res);

return 0;
}

int accept(void)
{
  int a;
  printf("Enter a no.:");
  scanf("%d",&a);
  return a;
}

int fact1(int a)
{ int fact=1;
  for(int i=1;i<=a;i++)
 {
    fact = fact * i;
  } 
  return fact;
}
