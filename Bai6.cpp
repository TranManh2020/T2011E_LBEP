#include <stdio.h>
int main(){
	int a,b;
	
	printf("Nhap ngay: ");
	scanf("%d",&a);
	
	printf("Nhap thang: ");
	scanf("%d",&b);
	
	if(a>0 && a<32 && b>0 && b<13){
		if(b<3){
			if(b==1){
				printf("Ngay thu %d trong nam \n",a);
			}else{
				if(a>28){
					printf("Ko xac dinh");
				}else{
					int c;
					c=a+31;
					printf("Ngay thu %d trong nam \n",c);
				}
			}
		}else{
			int c;
			c=a+28+(b-2)*31;
			printf("Ngay thu c trong nam \n");
		}
		int d;
		d=a%7+1;
		if(d==1){
			printf("Day la chu nhat");
		}else{
			printf("Day la thu %d",d);
		}
	}else{
		printf("Ko xac dinh \n");
	}
}
