//a program to accept integer values of base and index and calculate power of base to
//index.


#include<stdio.h>
#include<math.h>
int main()
{

int base,index, pow=1;
printf("Enter base:");
scanf("%d",&base);

printf("Enter index:");
scanf("%d",&index);

for(int i =1;i<=index;i++)
  pow=pow*base;

printf("%d^%d=%d\n",base,index,pow);

return 0;
}
