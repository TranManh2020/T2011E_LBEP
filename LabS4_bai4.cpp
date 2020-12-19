#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	do{
		printf("Nhap a= ");
		scanf("%d",&a);
		printf("Nhap b= ");
		scanf("%d",&b);
		printf("Nhap c= ");
		scanf("%d",&c);
	}while(!(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a));
	int v = a+b+c;
	float p = (float)v/2;
	float s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Chu vi: %d va dien tich: %f",v,s);
}
