#include<stdio.h>

int main(){
    int m=0,i;
    char arr[100];  
    scanf("%[^\n]",&arr);
    while(1==1){
        if(arr[m]=='\0'){
            break;
        }
        m++;
    }
    for(i=m-1;i>=0;i--){
        printf("%c",arr[i]);
    }
}