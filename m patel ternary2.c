#include<stdio.h>
int main (){
	int a,b,c,d;
	printf("enter the 1 number");
	scanf("%d" ,&a);
	printf("enter the 2 number");
	scanf("%d" ,&b);
	printf("enter the 3 number");
	scanf("%d" ,&c);
	printf("enter the 4 number");+
	scanf("%d" ,&d); 
	
	a<b?a<c?a<d?printf("a"):printf("c"):printf("d"):
	b<c?b<d?printf("b"):printf("c"):
	c<d?printf("c"):printf("d");
		
		
		
	
}
