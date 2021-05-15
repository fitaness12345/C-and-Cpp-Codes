#include <stdio.h>
#include <time.h>
main(){
	
	int x;
	
	printf("Timer starts:\n");
	scanf("%d", x);
	
	if (x >= 0){
	
		printf("%d\n", x);
		--x;
	}
	
	else (x == 0);{
		
		printf("Timer's up");
	}
	return 0;
}
