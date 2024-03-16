#include<stdio.h>
int main()
{
char c;
int a;
printf("Enter character:");
scanf("%c",&c);

printf("Enter num:");
scanf("%d",&a);

int i = 0;
while(i<=a)
{
printf("%c",c);
i++;
}
printf("\n");
return 0;
}
