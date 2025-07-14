#include<stdio.h>
int double_it(int num){
    num*=2;
    return num;
}
int main(){
    int x=10;
    int result=double_it(x);
    printf("%d",result);

    return 0;
}