/*Daigneault Pearce
This is my solution to the Bitwise Operations problem on HackerRank*/
#include <stdio.h>

void calculate_the_maximum( int, int );
void calculate_the_maximum( int n, int k ){
    int i, j, maxAnd, maxOr, maxXor;
    maxAnd = maxOr = maxXor = 0;

    for( i = 1; i <= n; i++ ){
      for( j = 1; j <= n; j++ ){
        //Do not evaulate identical pairs, do not evaluate duplicate pairs
        if( i == j || j < i){
          continue;
        }
        if( ( (i & j) > maxAnd ) && ( (i & j) < k ) )
          maxAnd = ( i & j );
        if( ( (i | j) > maxOr ) && ( (i | j) < k ) )
          maxOr = ( i | j );
        if( ( (i ^ j) > maxXor ) && ( (i ^ j) < k ) )
          maxXor = ( i ^ j );
      }
    }
    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
}

int main(){
  int n, k;

  scanf( "%d %d", &n, &k );
  calculate_the_maximum( n, k );

  return 0;
}
