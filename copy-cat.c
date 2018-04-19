#include <stdio.h>

/*copy input to output and exercises from "The C Programming Language"*/

int main(){
	
	int c;
	//Discover the value of EOF.
	printf( "%d\n", EOF );
	
	while( ( c = getchar() ) != EOF )
		putchar(c);
	
	return 0;
}
