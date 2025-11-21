#include <stdio.h>
int main(){
	double a=1;
	int day=1;
	int week=0;
	do{
	for(day=1;day<=5;day++){
	a*=1.01;
}
	for(day=6;day<=7;day++){
	a*=0.99;
	}
	week++;
}while(week<52);
    printf("52周（一年）总金额为%.2f元。",a);
	return 0;
}
