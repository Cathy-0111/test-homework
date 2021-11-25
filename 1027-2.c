#include<stdio.h>
int n,m=0;
int square (int arr[]){
    int m=0;
    while(m<n){
        printf("%d ",arr[m]*arr[m]);
        m++;
    }
}

int main (){
    scanf("%d",&n);
    int arr[n];
    while(m<n){
        scanf("%d",&arr[m]);
        m++;
    }
    square(arr);        //不用打arr[m]
}