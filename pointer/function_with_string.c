#include<stdio.h>

void fun(int s[],int n){
    printf("%s",s);
}
int main(){
    char s[10];
    scanf("%s",&s);
    fun(s,10);
    return 0;
}