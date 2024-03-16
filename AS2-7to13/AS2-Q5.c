#include<stdio.h>
int main()
{

// Max. of 3 nos. using if else:

int a = 40,b = 120,c = 60;
if(a>b)
 { if(a>c)
     printf("%d is maximum\n",a);
   else
     printf("%d is maximum\n",c);
 }
 else
 { if(b>c)
     printf("%d is maximum\n",b);
   else 
     printf("%d is maimum\n",c);
 }


// max. of 3 no.s using conditional operator:

int n1 = 40, n2 =120, n3 = 60, max;

max = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);

printf("%d is maximum\n",max);



return 0;
}
