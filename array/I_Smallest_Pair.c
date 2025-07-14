#include<stdio.h>
#include<limits.h>
int main(){
    int n,i,j,T,sum;
    scanf("%d",&T);
    while(T--){
           scanf("%d",&n);
       int  ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int min=INT_MAX;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            sum =ar[i] + ar[j] + (j - i);
            if(sum<min){
                min=sum;
            }
        }
    }printf("%d\n", min); 
    }
 

    return 0;
}