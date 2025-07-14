#include<stdio.h>
int main(){
    int i,m,n,flag=0;
        scanf("%d",&n);
        int ar[n];
        for(i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        scanf("%d",&m);
        for(int i=0;i<n-1;i++){ 
            for(int j=i+1;j<n;j++){
                if(ar[i]+ar[j]==m){
                   int flag=1;
                }
            }
        } printf("Yes");
    return 0;
}