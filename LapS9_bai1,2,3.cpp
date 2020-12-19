#include <stdio.h>
bool kiemtrasnt(int n){
	if(n<2) return false;
	if(n<=3) return true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0) return false;
	}
	return true;
}
int timsnttieptheo(int n){
	for(int i=n+1;true;i++){
		if(kiemtrasnt(i))
			return i;
	}
}
int timsodaonguoc(int n){
	int x=0;
	while(n!=0){
		x = x*10 + n%10;
		n/=10;
	}
	return x;
}
int timsofibonaci(int n){
	if(n==0) return 0;
	if(n<3) return 1;
	int a=0,b=1,c=1;
	for(int i=3;i<=n;i++){
		a=b;
		b=c;
		c=a+b;
	}
	return c;
}
int main(){

}
