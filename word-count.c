/*Example from book not my code
counts characters, new lines and words.*/
#include <stdio.h>

#define IN 1
#define OUT 0

int c, nc, nl, nw, state;
int main(){
	
	state = OUT;
	nc = nl = nw = 0;
	
	while ( ( c = getchar() ) != EOF )
	{
		++nc;
		
		if( c == '\n' )
			++nl;
		
		if ( c == ' ' || c == '\t' || c == '\n' )
			state = OUT;
		else if(state == OUT){
			state = IN;
			++nw;
		}
	}
	
	printf("%d %d %d\n",nl,nw,nc);
	return 0;
}