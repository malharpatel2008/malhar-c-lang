#include <stdio.h>
int main(){
	label:
	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for gujarati\n");
	printf("press 4 for exit\n ");
	int choice,chocie2;
	printf("enter your choice");
	
	scanf("%d",&choice);
	switch(choice){ // english
	
	         case 1: printf("press 1 for internate recharge\n");
	                 printf("press 2 for topup recharge\n");
	                 printf("press 3 for special recharge\n");
	                 
	                 scanf("%d",&choice);
	                 
	                 switch (choice){
	                 	case 1: 
	                 	printf("you have sucesfully done internate recharge");
	                 	goto label;
	                 	case 2:
	                 	printf("youhave sucesfully done topup recharge ");
	                 	goto label;
	                 	case 3:
	                 	printf("you have sucesfully done spcial recharge");
	                 	goto label;
	                 	case 4: 
	                    printf("you are exited");
					 }
		
		
	
		
	
			
			
			//
			char max='A' 'B'
			printf("max is %c",max);
	
	
	
}
}
