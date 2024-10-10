#include<stdio.h>
int main (){
	int row;
	printf("enter the number of row : ");
	scanf("%d",&row);
   
	int i,j;
	for(i=1;i<row;i++){
		for(j=1;j<=i;j++){
			printf("*",j);
		}
		printf("\n");
	}
	
}
