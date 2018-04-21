/*Exercise 1-8 This program will count blanks, tabs, and newlines.*/
#include <stdio.h>

int c, b_count, t_count, nl_count;

int main(){
	
	c = 0;
	b_count = 0;
	t_count = 0;
	nl_count = 0;
	
	while ( ( c = getchar() ) != EOF ){
		if ( c == ' ' )
			++b_count;
		if ( c == '\t' )
			++t_count;
		if ( c == '\n' )
			++nl_count;
	}
	
	printf("%d spaces, %d tabs, and %d newlines.\n", b_count, t_count, nl_count);
	return 0;
}