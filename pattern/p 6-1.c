#include<stdio.h>
int main (){
	int row;
	printf("enter the number of row : ");
	scanf("%d",&row);
    int column;
	printf("enter the number of column : ");
	scanf("%d",&column);
	
	int i,j;
	for(i=10;i>=1;i--){
		for(j=10;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
	
}
