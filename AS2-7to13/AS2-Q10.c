#include<stdio.h>
int main()
{

char c;

printf("Enter a character:");
scanf("%c",&c);

if((c >=65 && c <= 90) || (c >=97 && c <= 122))
  {
    if((c >=65 && c <= 90))
        printf("%c is a Uppercase character\n",c);
    else
        printf("%c is a Lowercase character\n",c);
  }
else if((c >=48 && c <= 57))
   printf("%c is a digit\n",c);

else if ((c == 32 || c == ' '))
   printf("It is a space\n");

else if(( c == '\t'))
  printf("It is a tab\n",c);

else if((c == 10 || c == '\n '))
   printf("It is a new line\n",c);



return 0;
}
