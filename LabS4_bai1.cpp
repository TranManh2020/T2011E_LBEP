#include <stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	int a=1;
	for(int i=1;i<=n;i++){
		a*=i;		
	}
	printf("%d! = %d",n,a);
}
