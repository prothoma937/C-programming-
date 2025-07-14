#include<stdio.h>
void fun(int x){
    x=20;
    // printf("%d\n",x);
    printf("fun function x address:%p\n",&x);
   
}
int main(){
    int x=10;
    fun(x);
    // printf("%d\n",x);
    printf("Main function x address:%p\n",&x);
    return 0;
}