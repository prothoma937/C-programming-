#include<stdio.h>
int main(){
    int i,n,j,m;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);

    }
   
    // scanf("%d",&idx);
    for(i=0,j=n-1;i<j;i++,j--){
        m=ar[i];
        ar[i]=ar[j];
         ar[j]=m;
    }

    
    for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }

    return 0;
}