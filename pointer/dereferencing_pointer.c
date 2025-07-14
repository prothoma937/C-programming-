#include<stdio.h>
int main(){
    int x=10;
    printf("%d\n",x);

    int* ptr=&x;
    *ptr=200;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);

    return 0;
}