#include <stdio.h>
#include <stdlib.h>
int main()
{
    int input=0;
    printf("%s","�O�_���в�?(0: No, 1: Yes)");
    scanf("%d",&input);
    if (input==1)
    {
       printf("%s","�i�H�U��");
    }
    
   else if (input==0)
   {
       printf("%s","�O�_�w�B?(0: No, 1: Yes)");
       scanf("%d",&input);
       if(input==1)
     {
       printf("%s","�i�H�U��");
     }
       else if(input==0)
     {
       printf("%s","�O�_�~���J > 100�U?(0: No, 1: Yes)");
       scanf("%d",&input);
       if(input==1)
       {
       printf("%s","�i�H�U��");
       }
       else
       {
       printf("%s","����U��");
       }

     }
   }
}