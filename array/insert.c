#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int ar[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);

    }
    int idx,val;
    scanf("%d %d",&idx,&val);
    for(i=n;i>=idx+1;i--){
        ar[i]=ar[i-1];
    }ar[idx]=val;
    for(i=0;i<=n;i++){
        printf("%d " ,ar[i]);
    }
    return 0;
}