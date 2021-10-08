#include <stdio.h>
#include<stdlib.h>
int main(void)
{
 int input;
 scanf("%d",&input);
 if(input%4==0&&input%100!=0)
 {
     printf("%s","秥");
 }
 else if(input%4==0&&input%100==0&&input%400!=0)
 {
     printf("%s","キ");
 }
 else if(input%4==0&&input%100==0&&input%400==0)
 {
     printf("%s","秥");
 }
 else
 {
     printf("%s","キ\n");
     if (input%4==1&&(input-1)%100!=0)
     {
       printf("瞒%d程秥琌 %d ",input,input-1);
       if (input%4==1&&(input-1)%100==0)
       {
            printf("瞒%d程秥琌 %d ",input,input+3);
       }
     }
     else if(input%4==3&&(input+1)%100!=0)
     {
        printf("瞒%d程秥琌 %d ",input,input+1);
     }
    else if (input%4==3&&(input+1)%100==0)
     { 
            printf("瞒%d程秥琌 %d ",input,input-3);
     }
     else if(input%4==2)
     {
         printf("瞒%d程秥琌 %d  %d ",input,input+2,input-2);
     }
 }
}