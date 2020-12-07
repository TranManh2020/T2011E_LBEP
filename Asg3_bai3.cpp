#include <stdio.h>
int main(){
	int a,b,x=0;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	
	for(int i=1;!(i>a||i>b);i++){
		if(a%i==0 && b%i==0){
			x=i;
		}
	}
		printf("Uoc chung lon nhat cua %d va %d la: %d",a,b,x);
}
