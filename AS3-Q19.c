//accept a range i.e. two numbers and print tables of numbers
//within the range.

#include<stdio.h>
int main()
{

int min, max;

printf("Enter min range:");
scanf("%d",&min);

printf("Enter max range:");
scanf("%d",&max);

for(int i=min; i<=max ; i++)
{
   for(int j=1 ; j<=10 ; j++)
    printf("%d*%d=%d\n",i,j,i*j);
}


return 0;
}
