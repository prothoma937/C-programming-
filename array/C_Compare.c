#include<stdio.h>
int main(){
    char a[1000],b[2000];
    scanf("%s\n%s",a,b);
    int str=strcmp(a,b);
    if(str<0){
        printf("%s\n",a);
    }else{
        printf("%s\n",b);
    }

    return 0;
}