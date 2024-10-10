#include<stdio.h>
int main(){
	int basesalary,HRA_percentage,DA_percentage,TA_percentage,gross_salary;
	
	printf("enter the base salary : ");
	scanf("%d", & basesalary);
	printf("enter the HRA percentage :");
	scanf("%d", & HRA_percentage);
	printf("enter the DA percentage :");
	scanf("%d", &DA_percentage);
    printf("enter the TA percentage :");
    scanf("%d", &TA_percentage);
    
    
    
    gross_salary= basesalary + basesalary * HRA_percentage/100 +basesalary *DA_percentage/100 +basesalary *TA_percentage/100;
    printf("the gross salary is : %d", gross_salary);
}
