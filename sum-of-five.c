/*My solution to Sum of digits of a five Digit Number from HackRank
  Daigneault Pearce*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calcSum( int );

int calcSum( int n){
  int sum;

  sum = 0;

  while ( n > 0){
    sum += ( n % 10 );
    n /= 10;
  }

  return sum;
}

int main() {

    int n, a;

    scanf( "%d", &n );
    a = calcSum( n );
    printf( "%d\n", a );

    return 0;
}
