#include<stdio.h>
#include<limits.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);

    }
    int min=INT_MAX,pos=0;
    for(i=0;i<n;i++){
        if(ar[i]<min){
            min=ar[i];
            
        }
    }printf("%d",min)

    return 0;
}
