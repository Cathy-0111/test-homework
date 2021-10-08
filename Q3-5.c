#include <stdio.h>
#include<stdlib.h>
int main()
{
   int age;
   int app;
   int income;
   int Public_servant;
   printf("%s","年齡:");
   scanf("%d",&age);
   if (age>30)
   {
       printf("%s","不見");
   }
   else
   {
       printf("%s","長相 (0: 醜, 1: 帥, 2: 中等):\n");
       scanf("%d",&app);
     if(app==0)
     {
          printf("%s","不見");
     }
     else
     {
         printf("%s","收入 (0: 低, 1: 中, 2: 高):\n");
         scanf("%d",&income);
         if(income==0)
         {
              printf("%s","不見");
         }
         else if(income==2)
         {
              printf("%s","見");
         }
         else
         {
             printf("%s","是否為公務員 (0: 否, 1: 是):\n");
             scanf("%d",&Public_servant);
             if(Public_servant==0)
             {
                  printf("%s","不見");
             }
             else
             {
                  printf("%s","見");
             }
         }
     }
   }
   
}