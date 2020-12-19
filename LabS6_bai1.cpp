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
	int a=0,j=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			a+=arr[i];
			j++;
		}
	}
	if(j==0){
		printf("Mang k co so le");
	}else{
		printf("TBC cac so le trong mang la: %f",(float)a/j);
	}
}
