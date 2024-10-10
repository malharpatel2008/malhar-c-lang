#include<stdio.h>
int main (){
	int row;
	printf("enter the number of row : ");
	scanf("%d",&row);
    int column;
	printf("enter the number of column : ");
	scanf("%d",&column);
	
	char i,j;
	for(i=65;i<=74;i++){
		for(j=65;j<=74;j++){
			printf("%c",i);
		}
		printf("\n");
	}
	
}
