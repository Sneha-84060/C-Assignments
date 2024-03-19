//menu driven program for four function calculator.


#include<stdio.h>

typedef enum operation{Exit=1,Addition,Subtraction,Multiplication,Division}opr;

int main()
{
int a,b;
opr choice;

printf("Enter num1:");
scanf("%d",&a);

printf("Enter num2:");
scanf("%d",&b);

do
{
printf("............................................\n");
printf("1.Exit\n 2.Addition\n 3.Subtraction\n 4.Multiplication\n 5.Division\n");
printf("Enter your choice (1-5):");
scanf("%d",&choice);

switch(choice)
{       
	   case Exit: 
                   printf("Bye................................\n");
                      break;
	    case Addition:
	                  printf("Addition: %d+%d=%d\n",a,b,a+b);
                       break;
		case Subtraction:
                      printf("subtraction: %d-%d=%d\n",a,b,a-b);
                       break; 
		case Multiplication:
                      printf("Multiplication: %d*%d=%d\n",a,b,a*b);
                       break;
		case Division:
		                if(b!=0)
                              printf("Division: %d/%d=%d\n",a,b,a/b);
						else
						    printf("cant divide by zero\n");
                       break;  

        default: printf("Invalid choice!\n");
                         
}
}
while(choice !=1);

return 0;
}






