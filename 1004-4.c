#include <stdio.h>
#include<stdlib.h>
int main(void)
{
 int input;
 scanf("%d",&input);
 if(input%4==0&&input%100!=0)
 {
     printf("%s","閏年");
 }
 else if(input%4==0&&input%100==0&&input%400!=0)
 {
     printf("%s","平年");
 }
 else if(input%4==0&&input%100==0&&input%400==0)
 {
     printf("%s","閏年");
 }
 else
 {
     printf("%s","平年\n");
     if (input%4==1&&(input-1)%100!=0)
     {
       printf("離%d最近的閏年是 %d 年",input,input-1);
       if (input%4==1&&(input-1)%100==0)
       {
            printf("離%d最近的閏年是 %d 年",input,input+3);
       }
     }
     else if(input%4==3&&(input+1)%100!=0)
     {
        printf("離%d最近的閏年是 %d 年",input,input+1);
     }
    else if (input%4==3&&(input+1)%100==0)
     { 
            printf("離%d最近的閏年是 %d 年",input,input-3);
     }
     else if(input%4==2)
     {
         printf("離%d最近的閏年是 %d 年 %d 年",input,input+2,input-2);
     }
 }
}
