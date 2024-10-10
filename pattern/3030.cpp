#include<stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<5;i++){
		for(k=5;k>=i;k--){
			printf("  ");
		}
		for(j=2*i;j>=0;j--){
			printf("%c ",'A'+j);
		}
		printf("\n");
	}
}
