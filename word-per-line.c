/*This program prints each word of input on a new line.
Exercise 1-12, The C Programming Language*/
#include <stdio.h>

int c;

int main(){
	
	while( ( c = getchar() ) != EOF ){
		
		if ( c == '\n' || c == ' ' || c == '\t')
			putchar('\n');
		else
			putchar(c);
	}
	
	return 0;
}