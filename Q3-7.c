#include <stdio.h>
#include<stdlib.h>
int main()
{
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 if(a>b||a>c||b>c)
 {
     printf("%s","False");
 }
 else 
 {
     if (a+b>c&&a-b<c)
     {
           printf("%s","True");
     }
    else
    {
        printf("%s","False");
    }
 }
}