/*Prints a histogram of the lengths of words in the input.
Daigneault Pardo Pearce*/

#include <stdio.h>

#define COUNT 10 /*largest size word for graph*/

int main(){
	
	int c, i, j;
	int charCount[COUNT];
	
	//initialize array
	for( i = 0; i < COUNT; i++)
		charCount[i] = 0;
	
	//reset value of i
	i = 0;
	
	//count characters untill whitespace
	while ( (c = getchar()) != EOF){
		if( c == ' ' || c == '\n' || c == '\t' ){
			charCount[i] += 1;
			i = 0;
		}
		else
			++i;
	}
	
	
	printf("\nHORIZONTAL HISTOGRAM\n");
	//print histogram
	for( i = 0; i < COUNT; i++){
		printf("%d|",i);
		for( j = 0; j < charCount[i]; j++)
				putchar('*');
		putchar('\n');
	}
	return 0;
}