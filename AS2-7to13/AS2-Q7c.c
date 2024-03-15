#include<stdio.h>
int main()
{
here:
int y;
char c;
printf("Enter year:");
scanf("%d",&y);

if((y%4==0 && y%100!=0)?(printf("leap year & 366 days\n",y)):((y%400==0)?(printf("leap year & 366 days\n",y)):(printf("Non-leap year & 365 days",y))))





printf("Do you want to continue (y/n): \n");
scanf("%*c%c",&c);
if(c=='y'||c=='Y')
goto here;


return 0;
}
