#include<stdio.h>
int main(){
   char s[1001];
   scanf("%s",s);
   int cap=0,small=0;
   for(int i=0;s[i]!='\0';i++){
  if(s[i]>= 'A' && s[i]<='Z'){
        s[i] +=32;
    }else if(s[i]>='a'&& s[i]<='z'){
        s[i]-=32;
    }else if(s[i]==','){
        s[i]= ' ';
    }
   }
  
printf("%s",s);
    return 0;
}