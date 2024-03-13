#include<stdio.h>
int main()
{
double T,F;
printf("Enter Temp. in Celcius:");
scanf("%lf",&T);
F = (9/5)*T+13;
printf("Temp. in Fahrenheit:%lf\n",F);


return 0;
}
