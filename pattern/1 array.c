#include<stdio.h>
int main(){
	int size,i,max,index;
	
	printf("enter the size of array : ");
	scanf("%d",&size);
	int array[size];
	printf("enter the elements : \n");
	for(i=0;i<size;i++){
		printf("enter array [%d]elements : ",i);
	scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++){
		printf(" array [%d]element is  : %d\n",i,array[i]);
}
index=0;
max=array[0];
for(i=0;i,size;i++){
	
	if(max<array[i]){
		index=i;
		max=array[i];
	}
}
printf("%d is max",max);
	}
