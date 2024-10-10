#include<stdio.h>
int main(){
	int i,j,k;


    for (i=10;i<=20;i++){
    	for(k=20;k>=i;k--){
    		printf(" ");
    		
		}
    	for(j=10;j<=i;j++){
    		printf("%d ",j);
    		
		}
		printf("\n");
	}
	
}
