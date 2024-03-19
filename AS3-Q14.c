//a program to accept a number and check whether it is Prime no.



#include<stdio.h>
int main()
{

int num;
printf("Enter no.");
scanf("%d",&num);
int flag=1;
for(int i =2;i<=num/2;i++)
{
  if(num%i==0)
  {
    flag=0;
  }
}

if(flag==1)
printf("%d is prime no.\n",num);
else
printf("%d is not prime no.\n",num);

return 0;
}
