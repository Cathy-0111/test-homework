#include<float.h>
#include <stdio.h>

int main()
{
    float n=-1;
    float max=-FLT_MAX,min=FLT_MAX;
    for(float i =0 ; i < 10;i++ )
    {
        scanf("%f",&n);
        if (max<n)
        {
            max=n;
        }

        if(min>n)
        {
            min=n;
        }
        
    }
    printf("max: %.2f\n",(float)max);
    printf("min: %.2f\n",(float)min);
}