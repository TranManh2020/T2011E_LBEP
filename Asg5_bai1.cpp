#include <stdio.h>
int main(){
	int m,n;
	printf("Nhap m =");
	scanf("%d",&m);
	printf("Nhap n =");
	scanf("%d",&n);
	
	int a=0,b=0;
	
	int tmp[m][n];
	printf("Nhap ma tran tmp: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("tmp[%d][%d]: ",i,j);
			scanf("%d",&tmp[i][j]);			
		}
	}
	
	printf("\nMa tran tmp2[%d][%d]: \n",m,n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",tmp[i][j]);
			a+=tmp[i][j];
		}
		printf("\n");
	}
	
	int tmp2[m][n];
	printf("Nhap ma tran tmp2: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("tmp2[%d][%d]: ",i,j);
			scanf("%d",&tmp2[i][j]);
		}
	}
	
	printf("\nMa tran tmp[%d][%d]: \n",m,n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",tmp2[i][j]);
			b+=tmp2[i][j];
		}
		printf("\n");
	}
	printf("Tong 2 ma tran tmp va tmp2 = %d",a+b);
}
