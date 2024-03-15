#include<stdio.h>
int main()
{

int a,p;

printf("Enter quantity:");
scanf("%d",&a);

if(a<50 && a>30)
{
p =(a*5)-((a*5*10)/100);
printf("Total price = %d\n",p);
}
else if(a>50)
 {
 p =(a*5)-((a*5*15)/100);
  printf("Total price = %d\n",p);
}
else
{
p = a*5;
  printf("Total price = %d\n",p);
}
return 0;
}
