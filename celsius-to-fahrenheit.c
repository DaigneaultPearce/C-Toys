#include <stdio.h>
#define UPPER 1000 //Upper limit of table
#define LOWER 0	   //Lower limit of table
#define STEP 20	   //Step size between entries

int main(){
	
	float celsius;
	
	printf("C\tF\n");
	for ( celsius = UPPER; celsius >= LOWER; celsius = celsius - STEP)
		printf( "%4.0f \t %4.0f\n", celsius, (9.0/5.0) * celsius + 32 );
	
	return 0;
}