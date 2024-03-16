#include<stdio.h>
int main()
{
Here:
int year,month;  
  printf("Enter year:");
  scanf("%d",&year);

  printf("Enter month no.(1-12): ");
  scanf("%d", &month);

    switch(month)
    {
       case 1:  case 3: case 5: case 8: case 7: case 10: case 12:
		       printf("no.of days = 31 days\n");
            break;

       case 2: if((year%4==0 && year%100!=0) || (year%400==0))
	                printf("no.of days = 29 days\n");
				else
				    printf("no.of days = 28 days\n");
		     break;

       case 4: case 6: case 9: case 11:
	         printf("no.of days = 30 days\n");
                  break;

       default: 
             printf("Invalid input! Please enter month number between 1-12");
    }

char c;
printf("Do you want to continue (y/n): \n");
scanf("%*c%c",&c);
if(c=='y'|| c=='Y')
goto Here;

return 0;
}
