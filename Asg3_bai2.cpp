#include <stdio.h>
int main(){
	int n,a=0;
	printf("Nhap n=");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			a+=i;
		printf("Cac uoc so cua %d la: %d \n",n,i);
		}
	}
	printf("Tong cac uoc so cua %d = %d",n,a);
}
