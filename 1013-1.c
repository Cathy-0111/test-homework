#include<stdio.h>
#include<float.h>

int main(){
    float n,min=FLT_MAX,max=-FLT_MAX;
    for(int i=0;i<10;i++){
        scanf("%f",&n);
        if(max<n){
            max=n;
        }
        if(min>n){
            min=n;
        }
    }
    printf("max: %.2f\n",max);
    printf("min: %.2f\n",min);
}
