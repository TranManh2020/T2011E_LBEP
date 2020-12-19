#include <stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	if(n<=0){
		printf("Ko co tiem can duoi cua %d trong day fibonaci",n);
	}else if(n==1){
		printf("Tiem can duoi cua %d trong day fibonaci la: %d",n,0);
	}else if(n==2){
		printf("Tiem can duoi cua %d trong day fibonaci la: %d",n,1);
	}else{
		int a=0,b=1,c=1;
		for(int i=3;b+c<n;i++){
			a=b;
			b=c;
			c=a+b;
		}
		printf("Tiem can duoi cua %d trong day fibonaci la: %d",n,c);
	}
}
