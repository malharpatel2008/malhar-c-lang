#include<stdio.h>
int main(){
	int i,j,k;


    for (i=65;i<=73;i++){
    	for(k=73;k>=i;k--){
    		printf(" ");
		}
    	for(j=65;j<=i;j++){
    		if(i%2==1){
    			printf("%c ",i);
			}
    		
    		
		}
		printf("\n");
	}
	
}
