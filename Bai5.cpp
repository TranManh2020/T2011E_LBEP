#include <stdio.h>
int main(){
	int a,b;
	
	printf("Nhap a=");
	scanf("%d",&a);
	
	printf("Nhap b=");
	scanf("%d",&b);
	
	if(a>=b){
		float c = (float)a/b;
		printf("%f",c);
	}else{
		int c = a*b;
		printf("%d",c);
	}
}
