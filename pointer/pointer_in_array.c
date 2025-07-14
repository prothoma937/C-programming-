#include<stdio.h>
int main(){
    int a[5]={5,10,20,30,40};
    *a=100;
    *(a+1)=200;
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    
    // printf("Array 0 index address:%p\n",&a[0]);
    // printf("Array address:%p\n",&a);
    //  printf("%d\n",a[0]);
    //  printf("%d\n",*a);
 
 
 
    // printf("%d\n",&a[0]);
    // printf("%d\n",&a[1]);
    // printf("%d\n",&a[2]);
    // printf("%d\n",&a[3]);
    // printf("%d\n",&a[4]);
    // printf("%d\n",*a);
    return 0;
}