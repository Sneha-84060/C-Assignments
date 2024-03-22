//Write function to check whether given year is leap or not. Write another function to print
//number of days in given month.



#include<stdio.h>

leapyr(int y);
days(int m);

int main()
{
int y;
printf("Enter year:");
scanf("%d",&y);
leapyr(y);

int m;
printf("Enter month no.:");
scanf("%d",&m);
days(m);

return 0;
}


leapyr(int y)
{
if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
  printf("The %d is a leap year.\n");

else
  printf("The %d is not leap year.\n");
}

days(int m)
{
int y;
switch(m)
    {
       case 1:  case 3: case 5: case 8: case 7: case 10: case 12:
		       printf("no.of days = 31 days\n");
            break;

       case 2: if((y%4==0 && y%100!=0) || (y%400==0))
	                printf("no.of days = 29 days\n");
				else
				    printf("no.of days = 28 days\n");
		     break;

       case 4: case 6: case 9: case 11:
	         printf("no.of days = 30 days\n");
                  break;

       default: 
             printf("Invalid input! Please enter month number between 1-12\n");
    }

}









