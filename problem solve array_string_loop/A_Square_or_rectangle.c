#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int w[n],h[n];
for(int i=0;i<n;i++){
      scanf("%d %d",&w[i],&h[i]);
}
for(int i=0;i<n;i++){
     if(h[i]==w[i]){
    printf("Square\n");
}else{
    printf("Rectangle\n");
}
}

    return 0;
}