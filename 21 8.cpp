#include<stdio.h>
int main(){




	int a,b,c,d;
	printf("enter first number :  ");
	scanf("%d",&a);
	printf("enter second number :  ");
	scanf("%d",&b);
	printf("enter third number :  ");
	scanf("%d",&c);
	printf("enter four number :  ");
	scanf("%d",&d);
	
	
	if (a>b&&a>c&&a>d)	{
		printf("%d",a);
	}
	
	
	else if (b>a&&b>c&&b>d) {
		printf("%d",b);
	}
	else if(c>a&&c>b&&c>d){
		printf("%d",c);
		
	}
	else  {
		printf("%d",d);
		
	}
	}
