#include<stdio.h>

int main(){
	int size;
	
	
	printf("enter array size : ");
	scanf("%d",&size);
	
	int y[5];
    printf("Enter array elements : \n"); 
    int i;
for(i=0;i<=4;i++){
	printf("enter %dth element : ",i);
	scanf("%d",&y[i]);
}
printf("the array elements are : \n");
for(i=0;i<=4;i++){
	printf("%dth element is : %d\n",i,y[i]);
	
}  
float sum=0;
float avrage;

     for(i=0;i<=4;i++){
     sum=sum+y[i];
    
}
avrage=sum/size;

printf("avrage of an array : %f \n",avrage);
}
	
	
	
