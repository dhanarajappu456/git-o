#include<stdio.h>
void main(){
int v,s=0,p=49,i,j,t;
char m,b[60],a[5000];

for(i=49;i>=0;i--){

  for(j=i;j<=(i+99*50);j+50){
   b=a[j];
   t=b-'\0';
   s=s+t;
   
   }
   v=s%10;
   s=s-v;
   m=v+'\0';
   b[p]=m;
   p--;
}
printf("%s",b);

}