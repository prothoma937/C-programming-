#include<stdio.h>
#include<string.h>
int main(){
    int n,i;
    scanf("%d",&n);



    for(i=0;i<n;i++){
        
    char ar[1000];
    scanf("%s",ar);
    int size= strlen(ar);

        if(size>10){
    
            printf("%c%d%c\n",ar[0],size-2,ar[size-1]);
        }else{
            printf("%s\n",ar);
        }
    }

    return 0;
}