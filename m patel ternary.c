#include <stdio.h>
int main (){
	int x,y,z,w;
	printf("enter the 1 number");
	scanf("%d" ,&x);
	printf("enter the 2 number");
	scanf("%d" ,&y);
	printf("enter the 3 number");
	scanf("%d" ,&z);
	printf("enter the 4 number");
	scanf("%d" ,&w);
	
	x>y?x>z?x>w?printf("x"):printf("z"):printf("W"):
	y>z?y>w?printf("y"):printf("z"):
	z>w?printf("z"):printf("w"); 
}
