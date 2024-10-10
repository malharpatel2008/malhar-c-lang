#include <stdio.h>
int main(){
	float area, radius;
	printf("enter the radius:");
	scanf("%f",& radius);
	area = 3.14*radius*radius;
	printf("area is : %f" ,area);
	
	
	float  length;
	printf("\nenter the length : ");
	scanf ("%f",& length);
	area= length*length;
	printf("the area is : %f",area);
	
	
	float base,height;
	printf ("\nenter the base :");
	scanf ("%f",& base);
	printf("enter the height :");
	scanf("%f",& height);
	area= 0.5*base*height;
	printf("the area is :%f",area);
}

	
	

