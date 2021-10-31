#include <stdio.h>
#include<stdlib.h>
int main(void)
{
   int greade;
   scanf("%d",&greade);
   if (greade>=90)
   { 
       printf("%s","A\n");
   }
   else if(greade>=80)
   {
        printf("%s","B\n");
   }
   else if(greade>=70)
   {
        printf("%s","C\n");
   }
   else if(greade>=60)
   {
        printf("%s","D\n");
   }
   else
   {
        printf("%s","F\n");
   }
}
