#include <stdio.h>
#include<math.h>
int main(void)
{
    int x,y,A;
    scanf("%d%d",&x,&y);
    A=sqrt(x*x+y*y);
    if (A>100)
    {
         printf("outside\n");
    }
    else
    {
          printf("inside\n");
    }
    

  
  
}