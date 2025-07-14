#include<stdio.h>

int double_it(int num){
    num *=2;
    return num;

}

int main(){
    int a=20;
    int dbl=double_itz(a);
printf("%d",dbl);
    return 0;
}