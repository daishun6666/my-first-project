#include <stdio.h>
int main(){
int a,b,n;
scanf("%d %d %d",&a,&b,&n);
long double k;
k=(a*1.0/b*1.0)-(a/b);
long double number;
number=k;
for(int i=0;i<n;i++){
number*=10;
}
int t=(int)number%10;
printf("%d",t);
return 0;
}
