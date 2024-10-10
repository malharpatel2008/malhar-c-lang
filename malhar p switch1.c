#include<stdio.h>
int main(){
	label:
	printf("enter 1 for pizza\n");
	printf("enter 2 for burger\n");
	printf("enter 3 for chiken\n");
	printf("enter 4 for exit\n");
	int choice;
	scanf("%d",&choice);
	
	switch(choice){
	case 1:
	    printf("pizza odered sucesfully\n");
	    goto label;
	    break;
	case 2:
	    printf("burger odered sucesfully\n");
	    goto label;
	    break;
    case 3:("chiken odered sucesfully\n");
	    goto label;
	    break;
	    default:
	case 4:
	    printf("exit");
	}
}
