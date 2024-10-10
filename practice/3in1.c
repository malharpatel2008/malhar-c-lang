//60+ older 3 
//18-60 perfect 2
//18-younger 1



#include<stdio.h>
int main(){
    
    int age;
    printf("enter your age : ");
    scanf("%d",&age);
    
    int num;
  num= age>60?3:age>=18?2:1;
  switch(num){
  	
  	case 1:
  		printf("you  can't  vote ");
  		break;
  		
  	case 2:
  		printf("you can vote ");
  		break; 
  		
  	case 3:
  		printf("you can vote");
  	    break;
  }
  
	if(num==2){
		printf("\nyour age are perfect");
	}
	else if(num==3){
		printf("\nyou are older");

	}
		else{
		printf("\nyou are younger");
}
}
