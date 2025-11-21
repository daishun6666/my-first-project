#include<stdio.h>
int main(){
    int N;
    int i=1;
    int sum;
    scanf("%d",&N);
    while(i<N){
    i++;
	sum+=i;
}
    printf("%d",sum);
    return 0;
}
