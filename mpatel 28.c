#include<stdio.h>
int main(){
	int population;
	printf(" enter population ");
	scanf("%d",&population);
	
	
	
	char category=population>10000?'A':population>8000?'B':population>5000?'C':'D';
		     
	printf("max population is %c",category);
	
    
    
	
	
	
	
}
