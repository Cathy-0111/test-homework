#include<stdio.h>

int main(){
    int m=0,n=0,a=1;
    char arr1[100];
    char arr2[100];
    scanf("%[^\n]",&arr1);
    while(1==1){
        if(arr1[m]=='\0'){      //要改成arr[m]去看不同的位置
            break;
        }
        m++;
    }
    //printf("%d\n",m);

    for(int i=0;m-i>=0;i++){
        arr2[i]=arr1[(m-1)-i];
    }
    //printf("%s\n",arr2);

    while(n<=m/2){
        if(arr1[n]!=arr2[n]){
            a=0;
        }
        n++;
    }

    //printf("%d\n",n);

    if(a==1){
        printf("%s","Yes");
    }
    else if(a==0){
        printf("%s","No");
    }

}