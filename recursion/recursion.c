#include<stdio.h>
void hello(){//recursive function
    printf("hello\n");
   hello();
}
int main(){
    printf("Hi \n");
    hello();

    return 0;
}