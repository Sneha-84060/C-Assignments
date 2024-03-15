#include<stdio.h>

//no.of days in year(without using logical operator)

int main()
{
Here:
int y;
printf("Enter year:");
scanf("%d",&y);

if(y%400==0)
  printf("The %d is leap year and no. of days in %d year: 366 days\n",y,y);

  else if(y%100==0)
  printf("The %d is not leap year and no. of days in %d year: 365 days\n",y,y);

  else if(y%4==0)
  printf("The %d is leap year and no. of days in %d year: 366 days\n",y,y);


char c;
      printf("Do you want to continue (y/n):\n ");
	  scanf("%*c%c",&c);
         if(c=='y' || c=='Y')
		 goto Here;

return 0;
}
