#include<stdio.h>
int main()
{

int temp, num,rev=0,rem=0;


printf("Enter no.");
scanf("%d",&num);

temp=num;

while(temp!=0)
{
  rem=temp%10;
  rev=rev*10+rem;
  temp=temp/10;
}

printf("Reverse no.=%d\n",rev);

if(rev==num)
{
printf("%d is numeric palindrome\n",num);
}
else
{
printf("%d is not numeric palindrome\n",num);
}
return 0;
}
