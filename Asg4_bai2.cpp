#include <stdio.h>
int main(){
	int n;
	printf("Nhap n =");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	int x = arr[0];
	for(int i=0;i<n;i++){
		if(x<arr[i]){
			x=arr[i];
		}
	}
	if(x<0){
		printf("Ko co so duong trong mang");
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]>0 && x>arr[i]){
				x=arr[i];
			}
		}
		printf("So duong nho nhat cua mang la: %d",x);
	}
}
