#include <stdio.h>

int main(void)
{
  int C,E,M;
  printf("%s","a=");
  scanf("%d%d%d",&C,&E,&M);
  printf("%d\n",C+E+M);
  printf("%d\n",(C+E+M)/3);
}
