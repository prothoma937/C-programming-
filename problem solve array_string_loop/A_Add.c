#include<stdio.h>
int sum(int num1,int num2){
    int ans=num1+num2;
    return ans;
}
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int result=sum(num1,num2);
     printf("%d",result);
    return 0;
}