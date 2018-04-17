#include <stdio.h>

int main(){
	
	float celsius;
	
	printf("C\tF\n");
	for ( celsius = 1000; celsius >= 0; celsius = celsius - 20)
		printf( "%4.0f \t %4.0f\n", celsius, (9.0/5.0) * celsius + 32 );
	
	return 0;
}