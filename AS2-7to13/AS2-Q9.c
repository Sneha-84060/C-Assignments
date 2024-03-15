#include <stdio.h>

int main()
{
    int month, year;

    printf("Enter year: ");
    scanf("%d", &year);


    printf("Enter month(1-12): ");
    scanf("%d", &month);

if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
   printf("no. of days: 31 \n");

else if (month == 4 || month == 6 || month == 9 || month == 11 )
     printf("No. of days: 30 \n");

else if (month == 2)
    { 
     if((year % 4 == 0) && (year % 100 != 0) || ((year % 400 == 0) ))
	   printf("No. of days: 29 \n");

	  else
	    printf("No. of days: 28 \n");
     }
else 
  printf("Invalid input! please enter valid no. between 1-12 \n");
    return 0;
}
