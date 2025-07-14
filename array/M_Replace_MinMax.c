#include<stdio.h>
#include<limits.h>
int main(){
    int i,n,temp;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);

    }
    int min=INT_MAX,max=INT_MIN;
    int mainidx=-1,maxidx=-1;
   for(i=0;i<n;i++){
     if(ar[i]<min){
        min=ar[i];
        mainidx=i;
    }
    if(ar[i]>max){
        max=ar[i];
        maxidx=i;
    }
   }   
        temp=ar[mainidx];
        ar[mainidx]=ar[maxidx];
         ar[maxidx]=temp;
     for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }

    return 0;
}