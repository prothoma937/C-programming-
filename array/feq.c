#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
        
    }
    int feq[6]={0};
    for(i=0;i<n;i++){
        int val=ar[i];
        feq[val]++;
    }for(i=0;i<6;i++){
        printf("%d",feq[i]);
    }

    return 0;
}