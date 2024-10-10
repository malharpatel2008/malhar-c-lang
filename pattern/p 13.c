#include<stdio.h>
int main (){
	int rows;
	printf("enter the number of rows :");
	scanf("%d",& rows);
	
	char i,j;
	for (i=65;i<rows;i++){
		for(j=1;j<=i;j--){
			printf("%c",rows);
		}
		printf("\n");
	}
	
	
}
