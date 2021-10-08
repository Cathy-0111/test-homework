#include <stdio.h>
#include <stdlib.h>
int main()
{
    int input=0;
    printf("%s","是否有房產?(0: No, 1: Yes)");
    scanf("%d",&input);
    if (input==1)
    {
       printf("%s","可以貸款");
    }
    
   else if (input==0)
   {
       printf("%s","是否已婚?(0: No, 1: Yes)");
       scanf("%d",&input);
       if(input==1)
     {
       printf("%s","可以貸款");
     }
       else if(input==0)
     {
       printf("%s","是否年收入 > 100萬?(0: No, 1: Yes)");
       scanf("%d",&input);
       if(input==1)
       {
       printf("%s","可以貸款");
       }
       else
       {
       printf("%s","不能貸款");
       }

     }
   }
}