#include <stdio.h>
int main(){
	int n,x=0;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0,j=0;i<n;i++){
		if(arr[i]>0){
			j+=arr[i];
			if(x<j){
				x=j;
			}
		}else{
			j=0;
		}
	}
	printf("Chuoi so duong co tong lon nhat la: %d",x);
}
