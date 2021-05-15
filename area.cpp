#include <stdio.h>

int main()
{
	float length;
	float width;
	float area;
	// integer = int = 2,1,3,4,5
	// float = float = 1.23, 123.234
	
	printf("length:\n");
	scanf("%f", &length);
	printf("width:\n");
	scanf("%f", &width);
	area = length*width;
	printf("The area is: %f", area);
	
}
