#include<stdio.h>
int main(){
    long long int i,n;
    scanf("%lld",&n);
    long long int ar[n];
for(i=0;i<n;i++){
    scanf("%lld",&ar[i]);
}
long long int sum=0;
for(i=0;i<n;i++){
    sum=ar[i]+sum;
 
}  
if(sum<0){
    sum=sum*(-1);
    printf("%lld\n",sum);
}
else{
printf("%lld\n",sum);
}

    return 0;
}