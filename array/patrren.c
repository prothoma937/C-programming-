#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int str=1;
    int space=n-1;
    for(i=0;i<n;i++){
        for(int j=0;j<space;j++){
            printf(" ");
        }
        for(int j=0;j<str;j++){
              printf("*");
        }
        printf("\n");
        str ++;
        space--;
    }

    return 0;
}