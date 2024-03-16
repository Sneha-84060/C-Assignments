#include<stdio.h>

typedef enum operation{Addition=1,Subtraction,Multiplication,Division}opr;

int main()
{
here:
int a,b;
opr choice;

printf("Enter num1:");
scanf("%d",&a);

printf("Enter num2:");
scanf("%d",&b);

printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
printf("Enter your choice (1-4):");
scanf("%d",&choice);

switch(choice)
{       
	   case Addition:
	                  printf("Addition: %d+%d=%d\n",a,b,a+b);

		case Subtraction:
                      printf("Addition: %d+%d=%d\n",a,b,a+b);

		case Multiplication:
                      printf("Addition: %d+%d=%d\n",a,b,a+b);

		case Division:
		                if(b!=0)
                               printf("Addition: %d+%d=%d\n",a,b,a+b);
						else
						    printf("cant divide by zero\n");

        default: printf("Invalid choice!\n");
}

char c;
printf("Do you want to continue(y/n):");
scanf("%*c%c",&c);
if(c=='y'|| c=='Y')
goto here;

return 0;
}
