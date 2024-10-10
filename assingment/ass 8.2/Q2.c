#include<stdio.h>
int main(){
	
	int  num,num1;
	printf("enter any number : ");
	scanf("%d",&num);
	
    
    while(num>0){
    	num=num/=10;
        num1++;
	}
	printf("%d\n",num1);
	


}
