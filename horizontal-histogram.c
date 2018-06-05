/*Prints a vertical and horizontal histogram 
of the lengths of words in the input.
Daigneault Pardo Pearce*/

#include <stdio.h>

#define COUNT 10 /*largest size word for graph*/

int main(){
	
	int c, m, max, i, j;
	int charCount[COUNT];
	
	//initialize array
	for( i = 0; i < COUNT; i++)
		charCount[i] = 0;
	
	//reset value of i
	i = 0;
	
	//count characters until whitespace
	while ( ( c = getchar() ) != EOF ){
		if( c == ' ' || c == '\n' || c == '\t' ){
			charCount[i] += 1;
			i = 0;
		}
		else
			++i;
	}
	
	printf("\nHORIZONTAL HISTOGRAM\n");
	//print horizonal histogram
	for( i = 0; i < COUNT; i++ ){
		printf( "%d|" , i );
		for( j = 0; j < charCount[i]; j++ )
				putchar('*');
		putchar('\n');
	}
	
	//reset value of i and max
	i = m = 0;
	printf( "\nVERTICAL HISTOGRAM\n" );
	
	//find table max
	for( i = 0; i < COUNT; i++ ) {
		if( charCount[i] >= i )
			m = charCount[i];
	}
	
	//copy max to m
	max = m;
	
	//print vertical histogram
	for( i = 0; i < max; i++ ){
		for( j = 0; j < COUNT; j++ ) {
			if( charCount[j] >= m )
				printf("*  ");
			else
				printf("   ");
		}
		putchar('\n');
		m--;
	}
	
	//formating
	for( i = 0; i < COUNT; i++ )
		printf("-  ");
	
	//formating
	putchar('\n');
	
	//print table base
	for( i = 0; i < COUNT; i++ )
		printf("%d  ",i);
	
	return 0;
}