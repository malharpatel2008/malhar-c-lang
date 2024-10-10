#include<stdio.h>
int main (){
	int row;
	printf("enter the number of row : ");
	scanf("%d",&row);
    int column;
	printf("enter the number of column : ");
	scanf("%d",&column);
	
	int i,j;
	for(i=1;i<=10;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
}
