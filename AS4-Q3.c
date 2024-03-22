//Write a function to implement four function calculator.



#include<stdio.h>

// fun declaration............................

int accept(void);
int accept1(void);
int accept2(void);
int calculate(int a, char o, int b);

// fun call...............................

int main()
{
int a= accept();
char o= accept1();
int b=accept2();

int  result= calculate(a,o,b);
printf("%d %c %d=%d\n",a,o,b,result);
return 0;
}

// fun defination..........................

int accept(void)
{
int a;
printf("Enter op1:");
scanf("%d",&a);
return a;
}

int accept2(void)
{
int b;
printf("Enter op2:");
scanf("%d",&b);
return b;
}

int accept1(void)
{
char o;
printf("Enter opr:");
scanf("%*c%c",&o);
return o;
}

int calculate(int a, char o, int b)
{
 int result;
switch(o)
{       
	    case '+': 
		           result=a+b;
				  break;
		case '-':
		          result=a-b;
				  break;
		case '*': 
		           result=a*b;
				  break;
		case '/':       
		                 if(b!=0)
						  result=a/b;
                       break;  
                         
}
return result;
}


































































