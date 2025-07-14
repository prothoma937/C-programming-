#include<stdio.h>
int main(){
    int i,n,m;
    int found=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }

    
    scanf("%d",&m);
      for(i=0;i<n;i++){
        if(ar[i]==m){
        printf("%d",i);
        found=1;
        break;
    }
    }if(found==0){
        printf("-1");
    
    }
  
    return 0;
}