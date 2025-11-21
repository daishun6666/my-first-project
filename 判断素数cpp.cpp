#include <stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int i;
	int isPrime=0;
	for(i=2;i<x;i++){
	if(x%i==0){
	isPrime=1;}
}
if(isPrime==0){
	printf("是素数\n");
}else {
printf("不是素数\n",x);
}
return 0; 
}
