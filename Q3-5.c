#include <stdio.h>
#include<stdlib.h>
int main()
{
   int age;
   int app;
   int income;
   int Public_servant;
   printf("%s","�~��:");
   scanf("%d",&age);
   if (age>30)
   {
       printf("%s","����");
   }
   else
   {
       printf("%s","���� (0: ��, 1: ��, 2: ����):\n");
       scanf("%d",&app);
     if(app==0)
     {
          printf("%s","����");
     }
     else
     {
         printf("%s","���J (0: �C, 1: ��, 2: ��):\n");
         scanf("%d",&income);
         if(income==0)
         {
              printf("%s","����");
         }
         else if(income==2)
         {
              printf("%s","��");
         }
         else
         {
             printf("%s","�O�_�����ȭ� (0: �_, 1: �O):\n");
             scanf("%d",&Public_servant);
             if(Public_servant==0)
             {
                  printf("%s","����");
             }
             else
             {
                  printf("%s","��");
             }
         }
     }
   }
   
}