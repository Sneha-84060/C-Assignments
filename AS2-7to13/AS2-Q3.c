#include<stdio.h>
int main()
{
int a;
printf("Enter a no. to check:");
scanf("%d",&a);

if(a>0)
 printf("Given no.%d is Positive \n",a);
else if(a<0)
    printf("Given no. %d is Negative \n",a);
else if(a==0)
    printf("Given no. %d is Zero \n",a);


return 0;
}
