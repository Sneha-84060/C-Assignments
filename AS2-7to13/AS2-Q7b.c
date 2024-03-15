#include<stdio.h>
int main()
{
here:
int y;
printf("Enter year:");
scanf("%d",&y);

if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
  printf("The %d is a leap year and no. of days in %d year: 366 days\n");

else
  printf("The %d is not leap year and no. of days in %d year: 365 days\n");


char c1;
    printf("Do you want to continue (y/n) : \n");
	scanf("%*c%c",&c1);
	if(c1=='y'|| c1=='Y')
	goto here;


return 0;
}
