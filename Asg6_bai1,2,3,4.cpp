#include <stdio.h>
bool timKiem(int x,int arr[],int n){
	for(int i=0;i<n;i++){
		if(x==arr[i])
			return true;
		}
	return false;
}
void inSoLe(int arr[],int n){
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			printf("%5d",arr[i]);
		}
	}
}
int UCLN(int a,int b){
	int ucln = 1;
	for(int i=1;i<=a;i++){
		if(a%i==0 && b%i==0){
			ucln = i;
		}
	}
	return ucln;
}
int BCNN(int a,int b){
	for(int i=a;true;i++){
		if(i%a==0 && i%b==0){
			return i;
		}
	}
}
int	 main(){
	int n,x;
	printf("Nhap n= ");
	scanf("%d",&n);
	printf("Nhap x= ");
	scanf("%d",&x);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d]= ",i);
		scanf("%5d",&arr[i]);
	}
	
	bool timx = timKiem(x,arr,n);
	if(timx){
		printf("%d co nam trong mang %d so\n",x,n);
	}else{
		printf("%d ko nam trong mang %d so\n",x,n);
	}
	
	printf("Cac so le trong mang %d so: \n",n);
	inSoLe(arr,n);
	
	int a,b;
	printf("\nNhap a= ");
	scanf("%d",&a);
	printf("Nhap b= ");
	scanf("%d",&b);
	
	int ucln = UCLN(a,b);
	int bcnn = BCNN(a,b);
	printf("UCLN cua %d va %d: %d\n",a,b,ucln);
	printf("BCNN cua %d va %d: %d\n",a,b,bcnn);
}
