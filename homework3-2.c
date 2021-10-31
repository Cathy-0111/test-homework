
#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d",&n);
    m=n; 
    for ( int j = m; m >0; m--)
    {
        n=m;
        for ( int i = n; n>0; n--)
        {
            printf("%s","*");
        }
        printf("%s","\n");
    }
}
