#include<stdio.h>
int main()
{

// Max.of 2 nos. using if else:

int a = 5,b = 10;
if(a>b)
  printf("Maximum no. between 5 and 10 is:%d\n",a);
else
printf("Maximum no. between 5 and 10 is:%d\n",b);



// Max. of 2 nos. using conditional operator:

int n1 = 10 , n2 = 5, max;

	max = ((n1>n2) ? n1 : n2 ) ;

	printf(" Maximum no.: %d \n",max);



return 0;
}
