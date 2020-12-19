#include <stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	int x,j=0;
	printf("Nhap x= ");
	scanf("%d",&x);	
	for(int i=0;i<n;i++){
		if(x==arr[i]){
			j++;
			break;
		}
	}
	if(j==0){
		printf("So %d ko co trong mang",x);
	}else{
		printf("So %d co trong mang",x);
	}
}
