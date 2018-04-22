/*Exercise 9 Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blank.*/
#include <stdio.h>

int a, c;

int main(){
	
	while( ( c = getchar() ) != EOF ){

		if ( c == ' ' && a == ' ' )
			;
		else
			putchar(c);
		a = c;
	}
	
	return 0;
}