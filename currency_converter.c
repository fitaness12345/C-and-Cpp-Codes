#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define usd 0.021;
#define jpy 2.25;
#define sar 0.077;

main(){

	float php, usd_final, jpy_final, sar_final;
	int x;

	printf("--------------CURRENCY CONVERTER--------------\n\n");
	printf("1: Convert PHP to USD\n");
	printf("2: Convert PHP to JPY\n");
	printf("3: Convert PHP to SAR\n");
	printf("4: Exit\n");
	printf("----------------------------------------------\n\n");
	printf("Enter choice:\n");
	scanf("%d", &x);
	switch(x)
	{
		case 1:
			printf("Enter amount in PHP:\n");
			scanf("%d", &php);
			usd_final = php * usd;
			printf("The amount in USD is: %5.2f", usd_final);
			system("pause");

		case 2:
			printf("Enter amount in PHP:\n");
			scanf("%d", &php);
			jpy_final = php * jpy;
			printf("The amount in JPY is: %5.2f", jpy_final);
			system("pause");

		case 3:
			printf("Enter amount in PHP:\n");
			scanf("%d", &php);
			sar_final = php * sar;
			printf("The amount in SAR is: %5.2f", sar_final);
			system("pause");

		case 4:
			printf("Thank you! :D \n");
			system("pause");
	}
	return 0;

}

