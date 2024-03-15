#include<stdio.h>
int main()
{

here:
int x,y;

printf("Enter x-coordinate:");
scanf("%d",&x);

printf("Enter y-coordinate:");
scanf("%d",&y);

if(x>0 && y>0)
  printf("The point (%d,%d) is in 1st quadrant\n",x,y);

else if(x<0 && y>0)
 printf("The point (%d,%d) is in 2nd quadrant\n",x,y);

else if(x<0 && y<0)
  printf("The point (%d,%d) is in 3rd quadrant\n",x,y);

else if(x>0 && y<0)
 printf("The point (%d,%d) is in 4th quadrant\n",x,y);

else if(x>0 && y==0)
 printf("The point (%d,%d) is on +ve x-axis\n",x,y);

else if(x<0 && y==0)
  printf("The point (%d,%d) is on -ve x-axis\n",x,y);

else if(x==0 && y>0)
  printf("The point (%d,%d) is on +ve y-axis\n",x,y);

else if(x==0 && y<0)
  printf("The point (%d,%d) is on -ve y-axis\n",x,y);

else
  printf("The point (%d,%d) is origin\n",x,y);


char c;
printf("Do you want to continue (y/n) : \n");
scanf("%*c%c",&c);
if(c=='y'|| c=='Y')
goto here;


return 0;
}
