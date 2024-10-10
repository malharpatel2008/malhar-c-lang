#include <stdio.h>
int main(){
	int a,b,c,d,e;
	
        printf("enter 1 number");
	scanf("%d",&a);
		printf("enter 2 number");
	scanf("%d",&b);
		printf("enter 3 number");
	scanf("%d",&c);
		printf("enter 4 number");
	scanf("%d",&d);
		printf("enter 5 number");
	scanf("%d",&e);
	
	
	

char max=a>b?a>c?a>d?a>e?'a':'c':'d':'e':
	b>c?b>d?b>e?'b':'d':'e':
	c>d?c>e?'c':'e':
	d>e?'d':'e';
	printf("max is %c",max);
		
		
		
		
		
}
