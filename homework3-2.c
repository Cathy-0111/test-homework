#include<stdio.h>

int main(){
    int n,m;
    scanf("%d",&n);
    m=n;
    for(int j=n;j>0;j--){
            for(int i=m;i>0;i--){
            printf("%s","*");
            }
        m--;
        printf("\n");
    }
}
