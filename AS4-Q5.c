//a function to print a given character for a given number of times.


#include<stdio.h>

multi(int a,char c);

int main()
{
char c;
  printf("Enter character:");
  scanf("%c",&c);
  
  int a;
 printf("Enter num:");
scanf("%d",&a);
int i;
//char c;  
multi(a,c);

return 0;
}

multi(int a,char c)
{
int i;
for(int i =0;i<a;i++)
 { 
   printf("%c",c);
 }
 printf("\n");
}


































