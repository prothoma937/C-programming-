#include<stdio.h>
int fun(int* ptr){
  
    
    *ptr=200;
    return ptr;
}
int main(){
    int x=10;
   
    fun(&x);
       printf("%p\n",&x);
    printf("%d",x);

    return 0;
}