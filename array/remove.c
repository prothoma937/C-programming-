#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int ar[n-1];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);

    }
    int idx,value;
    scanf("%d",&idx);
    for(i=idx;i<n-1;i++){
        ar[i]=ar[i+1];
    }

    
    for(i=0;i<n-1;i++){
        printf("%d ",ar[i]);
    }

    return 0;
}