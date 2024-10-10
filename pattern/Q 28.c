#include<stdio.h>
int main(){
	int i,j,k;


    for (i=65;i<=74;i++){
    	for(k=74;k>=i;k--){
    		printf(" ");
		}
    	for(j=65;j<=i;j++){
    		printf("%c ",j);
    		
		}
		printf("\n");
	}
	
}
