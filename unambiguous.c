/*Exercise 1-10 Copy input to output,
replace tabs with \t, backspace by\b and slahes by \\ */

#include <stdio.h>

int c;
int main(){
	
	while( ( c = getchar() ) != EOF ){
		
		if ( c == '\t' )
			printf("\\t");
		
		else if ( c == '\b' )
			printf("\\b");
		
		else if ( c == '\\' )
			printf("\\\\");
		
		else
			putchar(c);
	}
	
	return 0;
}