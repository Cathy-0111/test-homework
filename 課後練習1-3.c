#include <stdio.h>

int main()
{
    int n=0,i=0,j=0;
    scanf("%d",&n);
    while (j<n)
    {
        i=0;
        while (i<n)
        {
            printf("%s","#");
            i++;
        }
        j++;
        printf("%s","\n");
    }
    
}