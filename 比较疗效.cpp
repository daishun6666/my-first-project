#include <stdio.h>
int main(){
int n;
int i;
int bing,hao;
int xiaolv[n];
for(i=0;i<n;i++){
scanf("%d %d",&bing,&hao);
xiaolv[i]=hao/bing;
}
for(i=1;i<n;i++){
if(xiaolv[0]-xiaolv[i]>0.05){
printf("better");
} else if(xiaolv[0]-xiaolv[i]<0.05){
printf("worse");
} else{    
printf("same");
}  
}
return 0;
}
