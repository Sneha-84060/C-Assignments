#include<stdio.h>
int main()
{

int num,rem=1,rev=0,temp;

printf("Enter no.:");
scanf("%d",&num);
while( num != 0  )
	{
		rem = num % 10;
		rev = rev * 10 + rem ;
		num = num / 10;
	}
	printf("Rev = %d \n",rev);
	if(temp == rev )
	{
		printf("Palindrome  \n");
	}
	else
	{
		printf("Not palindrome \n");
	}


return 0;
}
