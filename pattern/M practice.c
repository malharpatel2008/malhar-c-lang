#include<stdio.h>
int main(){
	int i,j,k;


    for (i=1;i<=15;i++){
    	for(k=15;k>=i;k--){
    		printf(" ");
		}
    	for(j=1;j<=i;j++){
    		printf("* ",j);
    		
		}
		printf("\n");
	}
	
}
