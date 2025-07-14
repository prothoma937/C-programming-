#include<stdio.h>
void mello(){
    printf("mello ");
}
void gello(){
    printf("gello ");
    mello();
}
void hello(){
    printf("hello ");
    gello();
}
int main(){
    printf("Hi ");
    hello();

    return 0;
}