#include<stdio.h>
int main(){
	
	printf("enter 1 for pizza  :\n ");
	printf("enter 2 for burger  :\n ");
	printf("enter 3 for sandwich  :\n ");
	printf("enter 4 for exit : \n");
	             
	
	int choice;
	printf("enetr your choice :");
	scanf("%d",&choice);
	
	switch(choice){
		  
		    case 1:
		  	printf("your pizza ordered succesfully \n");
		  	break;
		  	
		  	case 2:
		  	printf("your burger ordered succesfully \n");
		    break;
		  	
		  	case 3:
		  	printf("your sandwich ordered succesfully \n");
	        break;
	        
	        case 4:
	        printf("you are exited  \n");
	        break;
	        
	        default:
	        printf("invalid choice");
	       	break;
	}
	
	             
    
}
