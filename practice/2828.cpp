#include<stdio.h>
int main(){
	int age;
	printf("enter your age :");
	scanf("%d",&age);
	
	int num;
	num=age>60?1:age>=18?2:3;
	
	switch(num){
		    case 1:
			printf("you can vote");
			break;
			
			case 2:
			printf("you can vote");
			break;
			
			case 3:
			printf("you can not  vote");
			break;
	}
	if(num==1){
		printf("\nyou are older");
	}
	else if(num==2){
		printf("\nyour age are perfect");
	}
	else{
		printf("\nyou are younger");
	}
}
