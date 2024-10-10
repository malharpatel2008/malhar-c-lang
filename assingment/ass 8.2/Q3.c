#include<stdio.h>
int main(){
	int num,ldigit,fdigit;
	int sum=0;
	printf("enter any number :");
	scanf("%d",&num);  
	 ldigit=num%10;
	 sum=sum+ldigit;
	  while(num>=9){
	  	num=num/10;
	  }
	 fdigit=num;
	 sum=sum+fdigit;
	 printf("%d",sum);
	 
	
	
	
	
	
	
	
}
