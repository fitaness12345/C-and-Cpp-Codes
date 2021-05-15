#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define labacts 0.20
#define finalreports 0.20
#define project1 0.15
#define project2 0.15
#define practicalexam 0.30

main(){
	
	float reports;
	float proj1;
	float proj2;
	float pracexam;
	float grade;
	float marks[20]; 
	float percent=0;
	float total=0;
	int no; 
	int i;
	
	
	printf("--------------GRADES PROGRAM--------------\n\n");
	printf("Enter number of lab activities: ");
	scanf("%d",&no);
	printf("Enter marks of %d lab activities: ",no);
	for(i=0; i<no; i++)
	{
		scanf("%f",&marks[i]);
	}
	for(i=0; i<no; i++)
	{
		total=total+marks[i];
	}
	percent=total/no;
	printf("Lab activities grade: %.2f % \n",percent);
	printf("Enter marks in Final reports, in percentage:\n");
	scanf("%f", &reports);
	printf("Enter marks in Project 1, in percentage:\n");
	scanf("%f", &proj1);
	printf("Enter marks in Project 2, in percentage:\n");
	scanf("%f", &proj2);		
	printf("Enter marks in Practical Exam, in percentage:\n");
	scanf("%f", &pracexam);	
	grade = (percent*labacts)+(reports*finalreports)+(proj1*project1)+(proj2*project2)+(pracexam*practicalexam);
	printf("Your final grade is %.2f %", grade);
	
	return 0;
	
}

