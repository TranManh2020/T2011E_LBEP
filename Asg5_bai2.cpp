#include <stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	int tmp[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("tmp[%d][%d]: ",i,j);
			scanf("%d",&tmp[i][j]);
		}
	}
	printf("Ma tran tmp[%d][%d]:\n",n,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%5d",tmp[i][j]);
		}
		printf("\n");
	}
	int d1=0,d2=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				d1+=tmp[i][j];
			}
			if(i+j==n-1){
				d2+=tmp[i][j];
			}
		}
	}
	printf("TBC cua D1 = %f \n",(float)d1/n);
	printf("TBC cua D2 = %f ",(float)d2/n);
}
