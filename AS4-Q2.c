//Write a function to calculate power.


#include<stdio.h>
#include<math.h>

//fun declaration..........

int accept(void);
int accept1(void);
int pow1(int base,int index);

// fun call............

int main()
{
int base,index,pow=1;
base=accept();
index=accept1();

int res=pow1(base,index);
printf("%d^%d=%d\n",base,index,res);

return 0;
}

// fun defination

int accept(void)
{
int base;
printf("Enter base:");
scanf("%d",&base);
return base;
}

int accept1(void)
{
int index;
printf("Enter index:");
scanf("%d",&index);
return index;
}

int pow1(int base, int index)
{
int pow=1;
for(int i =1;i<=index;i++)
 {
   pow=pow*base;
 }
return pow;
}























