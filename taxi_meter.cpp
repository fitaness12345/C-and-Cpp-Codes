#include <stdio.h>

int main()
{
	float fee, distance;
	
	printf("================ TAXI METER ================\n\n");
	printf("Enter distance:\n");
	scanf("%f", &distance);
	
	if (distance <= 250)
	{
		fee = 40;
	}
	
	else if (distance > 250)
	{
		fee = 40;
		fee += 2.5*(distance-250)/250;
		
	}
	
	printf("Fee: %.2f", fee);

	return 0;
}
