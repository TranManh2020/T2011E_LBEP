#include <stdio.h>
int main(){
	float n=4000;
	for(int i=1;i<5;i++){
		n=n + n*8/100;
	}
	printf("Tong tien sau 4 nam la: %f",n);
}
