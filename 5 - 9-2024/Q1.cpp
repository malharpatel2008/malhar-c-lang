
#include<stdio.h>
int main(){
	printf("enter number of rows : ");
	int row;
	scanf("%d",&row);
	printf("enter number of columns : ");
	int column;
	scanf("%d",&column);
	
	int y[row][column];
	printf("Enter array elements :\n ");
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("Enter y[%d][%d]",i,j);
			scanf("%d",&y[i][j]);
		}
		printf("\n");
	}
	printf("Array Elements Are : \n");
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
printf("array element y[%d][%d] : %d",i,j,y[i][j]);
			printf("\n");
		}
}
}
