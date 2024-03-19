#include<stdio.h>
int main()
{

int flag=0;
int num;
printf("Enter no.:");
scanf("%d",&num);

int i = 1,j=2;
while(i<num)
{
  if (num/i==0)
   {  
	 while(j<i)
      {
         if(i%j==0)
		   {
             flag = 1;
		   }
		 j++;  
	  }
if(flag=0)
{
printf("Prime Factors are :\n");
printf("%d\n",i);
}
    }
i++;	
}
return 0;
}
