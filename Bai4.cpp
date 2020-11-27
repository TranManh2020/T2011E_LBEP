#include <stdio.h>
int main(){
	int a;
	printf("Nhap a=");
	scanf("%d",&a);
	 
	if(a>1 && a<9){
			if(a==8){
				printf("day la chu nhat");
			}else{
				printf("day la thu %d",a);
			}
	}else{
		printf("Ko phai ngay trong tuan");
	}
}
