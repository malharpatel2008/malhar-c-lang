#include<stdio.h>
int main (){
	int row;
	printf("enter the number of row : ");
	scanf("%d",&row);
    int column;
	printf("enter the number of column : ");
	scanf("%d",&column);
	
	char i,j;
	for(i=74;i>=65;i--){
		for(j=74;j>=65;j--){
			printf("%c",j);
		}
		printf("\n");
	}
	
}
