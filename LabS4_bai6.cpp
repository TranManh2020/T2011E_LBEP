#include <stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	if(n<=0){
		printf("So thu %d cua day fibonaci la: 0",n);
	}else if(n<2){
		printf("So thu %d cua day fibonaci la: 1",n);
	}else{
		int a=0,b=1,c=1;
		for(int i=3;i<=n;i++){
			a=b;
			b=c;
			c=a+b;
		}
		printf("So thu %d cua day fibonaci la: %d",n,c);	
	} 
}
