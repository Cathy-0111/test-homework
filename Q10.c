#include <stdio.h>


int main(void)
{
 int v1,v2;
printf("%s", "a=");
scanf("%d%d",&v1, &v2);
printf("%d+%d=%d\n",v1,v2, v1+v2);
printf("%d*%d=%d\n",v1,v2,v1*v2);
printf("%d-%d=%d\n",v1,v2,v1-v2);
printf("%d/%d=%d...%d\n",v1,v2,v1/v2,v1%v2);
}
