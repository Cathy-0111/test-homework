#include <stdio.h>
#include<stdlib.h>
int main(void)
{
 int input;
 scanf("%d",&input);
 if(input%4==0&&input%100!=0)
 {
     printf("%s","�|�~");
 }
 else if(input%4==0&&input%100==0&&input%400!=0)
 {
     printf("%s","���~");
 }
 else if(input%4==0&&input%100==0&&input%400==0)
 {
     printf("%s","�|�~");
 }
 else
 {
     printf("%s","���~\n");
     if (input%4==1&&(input-1)%100!=0)
     {
       printf("��%d�̪񪺶|�~�O %d �~",input,input-1);
       if (input%4==1&&(input-1)%100==0)
       {
            printf("��%d�̪񪺶|�~�O %d �~",input,input+3);
       }
     }
     else if(input%4==3&&(input+1)%100!=0)
     {
        printf("��%d�̪񪺶|�~�O %d �~",input,input+1);
     }
    else if (input%4==3&&(input+1)%100==0)
     { 
            printf("��%d�̪񪺶|�~�O %d �~",input,input-3);
     }
     else if(input%4==2)
     {
         printf("��%d�̪񪺶|�~�O %d �~ %d �~",input,input+2,input-2);
     }
 }
}