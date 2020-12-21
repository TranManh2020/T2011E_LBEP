#include <stdio.h>
#include <math.h>
bool kiemTraCanh(int a,int b, int c){
	if(!(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)) return false;
		return true;
}
int tinhChuVi(int a,int b,int c){
	if(kiemTraCanh){
		int v = a+b+c;
		return v;
	}
}
float tinhDienTich(int a,int b,int c){
	if(kiemTraCanh){
		float p = (float)(a+b+c)/2;
		float s = sqrt(p*(p-a)*(p-b)*(p-c));
		return s;
	}
}
int main(){
	int a,b,c;
	printf("Nhap a= ");
	scanf("%d",&a);
	printf("Nhap b= ");
	scanf("%d",&b);
	printf("Nhap c= ");
	scanf("%d",&c);
	
	bool kiemtra = kiemTraCanh(a,b,c);
	if(kiemtra){
		int cv = tinhChuVi(a,b,c);
		float dt = tinhDienTich(a,b,c);
		printf("Chu vi tam giac la: %d\n",cv);
		printf("Dien tich tam giac la: %f",dt);
	}else{
		printf("Loi: %d,%d va %d kp ba canh cua tam giac.",a,b,c);
	}
	
}
