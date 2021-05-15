#include <stdio.h>

int main() 
{    
	// Initialize
    int amount, value;   
    int denominations[9] = {1000, 500, 200, 100, 50, 20, 10, 5, 1};
	
	// Enter amount
    printf("Enter amount: ");
    scanf("%d", &amount);

	// Output
    printf("\n\n");
    printf("Output:\n");
	
	
    for (int i = 0; i < 9; i++) 
    {
        value = amount / denominations[i];

        if (value)
        {
            amount = amount % denominations[i];

            printf("%d = %d \n" ,denominations[i] ,value);
        }     
	}
	
    return 0;
}
