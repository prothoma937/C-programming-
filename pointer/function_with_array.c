#include<stdio.h>
void fun(int a[],int n){
    //  a[1]=100;
    // printf("fun function:%p\n",a);
for(int i=0;i<n;i++){
     printf("%d ",a[i]);
   }
}


int main(){
        //int a[5]={10,20,30,40,50}; 
    int n;
    scanf("%d",&n);
    int a[n];
     for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
   }
        fun(a,n);
        // printf("main function:%p\n ",a);
   
    return 0;
}