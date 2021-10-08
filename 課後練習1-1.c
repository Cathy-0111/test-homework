#include <stdio.h>

int main()
{
    int i=0,total=1,n=0;
    scanf("%d",&i);
    while (i-1>0) 
    {
      n=i*(i-1);
      total*=n;
      i=i-2;
    }
    printf("%d",total);
}