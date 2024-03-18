#include<stdio.h>
int main()
{
int num;
printf("Enter no.");
scanf("%d",&num);

printf("Factors are of %d\n",num);

int i=1;
while(i<num)
{
if(num%i==0)
{
printf("%d\n",i);
}
i++;
}

return 0;
}
