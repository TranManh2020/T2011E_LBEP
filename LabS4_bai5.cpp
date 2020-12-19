#include <stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	int a=0;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			a++;
			break;
		}
	}
	if(a==0 && n>1){
		printf("%d la so ngto",n);
	}else{
		printf("%d kp la so ngto",n);
	}
}
