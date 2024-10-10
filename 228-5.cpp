#include<stdio.h>
int main(){
printf("enter the 1 number");
int number;
scanf("%d",&number);
printf("enter the 2 number");
scanf("%d",&number);

while(number<=2040){
	printf("%d\n",number);
number=number-4;
}

}

