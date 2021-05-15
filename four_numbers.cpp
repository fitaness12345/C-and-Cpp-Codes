#include <stdio.h>
#include <stdlib.h>

main(){
	
	float num1;
	float num2;
	float num3;
	float num4;
	float sum;
	float average;
	float squaresum;
	int x;
	
	printf("--------------SUM, AVERAGE AND SUM OF THE SQUARES OF THE NUMBERS--------------\n\n");
	printf("1: SUM\n");
	printf("2: AVERAGE\n");
	printf("3: SUM OF THE SQUARES OF THE NUMBERS\n");
	printf("4: Exit\n");
	printf("----------------------------------------------\n\n");
	printf("Enter choice:\n");
	scanf("%d", &x);
	switch(x)
	{
		case 1:
			printf("Enter four values:");
			scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
			sum = num1+num2+num3+num4;
			printf("The sum of the four numbers is %5.2f", sum);
			system("pause");
		
		case 2:
			printf("Enter four values:");
			scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
			average = (num1+num2+num3+num4)/4;
			printf("The average of the four numbers is %5.2f", average);
			system("pause");

		case 3:
			printf("Enter four values:");
			scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
			squaresum = ((num1*num1)+(num2*num2)+(num3*num3)+(num4*num4));
			printf("The square of the sum of the four numbers is %5.2f", squaresum);
			system("pause");

		case 4:
			printf("Thank you! :D \n");
			system("pause");
	}
	return 0;

}

