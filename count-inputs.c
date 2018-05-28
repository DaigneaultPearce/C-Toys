/*Another book example, this program counts whitespace
frequency of digits, and others*/
#include <stdio.h>

int main(){
	
	int c, i, nother, nwhite;
	int nDigit[10];
	
	i = nother = nwhite = 0;
	for ( i = 0; i < 10; i++)
		nDigit[i] = 0;
	
	while( (c = getchar()) != EOF ){
		
		if( c >= '0' && c <= '9')
			++nDigit[c - '0'];
		else if( c == ' ' || c == '\n' || c == '\t' )
			++nwhite;
		else
			++nother;
	}
	
	
	for( i = 0; i < 10; i++)
		printf("%d", nDigit[i]);
	
	printf(", white space = %d, other = nother %d ", nwhite, nother);
	
	return 0;
}