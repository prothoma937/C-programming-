#include<stdio.h>
int ans(){
    printf("Hello");
    ans();
}
int main(){
    int x=10;
    ans();

    return 0;
}