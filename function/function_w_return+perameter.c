#include<stdio.h>
int sum(int a,int b){
int ans=a+b;

    return ans;
}
int mul(int a2,int b2){
    int ans2=a2*b2;
    return ans2;
}

int main(){
    int a,b;
    int sumt=sum(10,20);
    int mult=mul(10,10);
printf("%d %d",sumt,mult);
    return 0;
}