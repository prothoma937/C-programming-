#include<stdio.h>
void fun(int* p){
    *p=20;
    // printf("fun function x address:%p\n",&p);
   
}
int main(){
    int x=10;
    fun(&x);
    printf("%d\n",x);
    // printf("Main function x address:%p\n",&x);
    return 0;
}