#include<stdio.h>

int main()
{
int deptno, Empid;
char dg;

printf("Enter Empid:");
scanf("%d",&Empid);

printf("Enter department no.:");
scanf("%d",&deptno);


printf("Enter designation code:");
scanf("%*c%c",&dg);

switch(deptno)
{       
	   case 10:
	           printf("Employee with employee id %d is working in Marketing department\n",Empid);
			   break;

		case 20:
               printf("Employee with employee id %d is working in Management department\n",Empid);
			   break;

		case 30:
               printf("Employee with employee id %d is working in Sales department\n",Empid);
			   break;

        case 40:
		       printf("Employee with employee id %d is working in Designing department\n",Empid);
			   break;
}

switch(dg)
{
        case 'M':
		        printf("as Manager\n",dg);
                  break;

		case 'S':
		        printf("as Supervisor\n",dg);
                  break;

		case 's':
		        printf("as Security Officer\n",dg);
                  break;

		case 'c':
		        printf("as Clerk\n",dg);
				  break;
}

return 0;
}






