#include<stdio.h>
int main(){
 int n,i;
    scanf("%d",&n);
    int ar[n];
 for( i=0;i<n;i++){
    scanf("%d",&ar[i]);
 }
 int sum=0;
 for(int i=0;i<n;i++){
printf("%d\n",ar[i]);
sum=ar[i]+sum;
 }printf("%d\n",sum);

    return 0;
}