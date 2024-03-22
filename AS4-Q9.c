//Write a function to indicate whether given number is prime or not. Write another function to
//print prime numbers in the given range.


#include<stdio.h>

 prime(int n1);

int main()
{
int n1;
printf("Enter no.");
scanf("%d",&n1);

 prime(n1);

return 0;
}

 prime(int n1)
{

int flag=1;
int i;
for(int i =2;i<=n1/2;i++)
{
  if(n1%i==0)
  {
    flag=0;
  }
}

if(flag==1)
printf("%d is prime no.\n",n1);
else
printf("%d is not prime no.\n",n1);

}



























