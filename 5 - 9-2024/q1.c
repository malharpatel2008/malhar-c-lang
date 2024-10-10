#include<stdio.h>
int  main(){
	printf("enter the number of rows");
	int row;
	scanf("%d",row);
	printf("enter the number of column");
	int column;
	scanf("%d",column);
	
	
	int y[row][column];
	printf("enter the array elements : \n");
	
	int i,j;
	for (i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("A[%d][%d]");
			scanf("%d",&y[i][j]);
		}
	}
		for (i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("A[%d][%d] : %d",i,j,y[i][j]);
}
}
}
