#include<stdio.h>

int main(){
    int n,m=0,a=1;        //n:輸入幾個數  m:輸入的數的位置
    int max=-100000;
    char arr[100];
    scanf("%d",&n);
    while(m<n){
        scanf("%d",&arr[m]);
        m++;
    }


    for(int i=0;i<n;i++){
        a=1;
        for(int j=i;j<n;j++){
            a*=arr[j];
            if(max<a){
                max=a;
            }
        }
    }
/*
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i+1;j++){
            int a=1;
            for(int l=j;l<j+i;l++){
                a*=arr[l];
                if(max<a){
                    max=a;
                }
            }
        }
    }
    */
    printf("%d",max);
}