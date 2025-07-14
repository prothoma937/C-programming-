#include<stdio.h>
int main(){
    int i,n,j,palin=0;
    scanf("%d",&n);
     int ar[n];
        
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
        
    }

    for(i=0,j=n-1;i<j;i++,j--){
      if( ar[i]!=ar[j]){
         palin=1;
      }

         
    }
    if(palin==1){
        printf("NO");
    }else{
        printf("YES");
    }


    return 0;
}