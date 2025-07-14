#include<stdio.h>
int sum(){
    int a,b;
    scanf("%d %d",&a,&b);
int ans=a+b;

    return ans;
}
// int mul(int a2,int b2){
//     int ans2=a2*b2;
//     return ans2;
// }

int main(){
    int a,b;
    int sumt=sum();
    // int mult=mul(10,10);
printf("%d",sumt);
    return 0;
}