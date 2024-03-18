#include<stdio.h>
#include<math.h>
int main()
{

    int num, originalnum, reminder, result = 0, n = 0;
   
	printf("Enter no.");
    scanf("%d",&num);
	
	originalnum = num;


while(originalnum != 0)
 {
   originalnum /= 10;
   ++n;
   }

	originalnum = num;

	while(originalnum != 0)
	{
	reminder = originalnum%10;
	result += pow(reminder, n);

   originalnum /= 10;
  
   }

if (result ==num)
	printf("%d is an armstrong number\n", num);

	else

   printf("%d is not an armstrong number\n", num);

return 0;
}
