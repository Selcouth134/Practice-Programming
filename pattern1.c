#include<stdio.h>
int main(){
	int n,i,j,k,l;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
		printf("\n");
	for(i=n;i>0;i--){
		for(j=i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
		printf("\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
		printf("\n");
	for(i=n;i>0;i--){
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
		printf("\n");
	
	
}

