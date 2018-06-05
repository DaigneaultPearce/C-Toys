/*Daigneault Pardo Pearce
print the frequencies of
different characters:
Characters, digits, white space, others*/  
#include <stdio.h>
#define typeCount 4 //number of different characters


int main(){
	
	//variable declarations
	int i, j, c, intCount, whiteCount, charCount, others;
	
	int charType[typeCount];
	
	//initialize to 0
	i = j = intCount = whiteCount = charCount = others = 0;
	
	while( ( c = getchar() ) != EOF ){
		
		if( c >= 48 && c <= 57 )
			intCount++;
		else if ( c == ' ' || c == '\t' || c == '\n' )
			whiteCount++;
		else if ( ( c >= 97 && c <= 122 ) || ( c >= 65 && c <= 90 ) )
			charCount++;
		else
			others++;
	}
	
	charType[0] = intCount;
	charType[1] = whiteCount;
	charType[2] = charCount;
	charType[3] = others;
	
	printf("there are %d ints.\n", intCount);
	
	printf("there are %d whitespaces.\n", whiteCount);

	printf("there are %d characters.\n", charCount);
	
	printf("there are %d others.\n", others);


	for( i = 0; i < typeCount; i++ ){
		printf("%d|", i);
		for( j = 0; j < charType[i]; j++ )
			putchar('!');
		putchar('\n');
	}
	return 0;
}