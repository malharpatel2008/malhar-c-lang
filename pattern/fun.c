#include<stdio.h>
void print(){//TNRN
	printf("enter 2 numbers : ");
	int x,y;
	scanf("%d%d",&x,&y);
	int i;
	for(i=x;i<=y;i++){
		printf("%d\n", i);
	}
}
void print2(int x, int y){//TSRN
	
	int i;
	for(i=x;i<=y;i++){
		printf("%d\n", i);
	}
}
int add3(){//TNRS
	printf("enter 2 numbers : ");
	int x,y;
	scanf("%d%d",&x,&y);
	return x+y;
}
int add4(int x,int y){//TSRS
	
	return x+y;
}

int main(){
//	print();
int x=add4(5,7);
printf("%d",x);
}
