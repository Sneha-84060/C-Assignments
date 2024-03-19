#include<stdio.h>
int main()
{

int num;
printf("Enter no.:");
scanf("%d",&num);

printf("pairs are:\n");

int i=1;
while(i<=num)
{
 int a=num/i;
num==i*a;
 i++;
printf("%d*%d=%d",num,i*a);

}




return 0;
}
