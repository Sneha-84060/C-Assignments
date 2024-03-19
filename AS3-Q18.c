//a program to print the tables of the numbers from 1 to 10.


#include<stdio.h>
int main()
{

int min =1, max =10;

for(int i=min; i<=max ; i++)
{
   for(int j=1 ; j<=10 ; j++)
    printf("%d*%d=%d\n",i,j,i*j);
}


return 0;
}
