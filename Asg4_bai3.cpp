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
			j++;
			if(x<j){
				x=j;
			}
		}else{
			j=0;
		}
	}
	printf("So luong cac so duong lien tiep nhieu nhat la: %d",x);
}
	// 1 bien dem + 1 bien luu tru
