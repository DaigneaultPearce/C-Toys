#include <stdio.h>
#include <stdlib.h>

int main(){
  //declatarion
  int n, i, tmp;
  int *arr;
  //initialization
  n = i = tmp = 0;
  //read size of array
  scanf("%d", &n);
  //dynamic 1d array declaration
  arr = (int*) malloc( n * sizeof (int) );

  for( i = 0; i < n; i++ )
    scanf("%d", &arr[i]);
  //inplace reversal
  i = 0;
  while ( i < ( n/2 ) ){
    tmp = arr[i];
    arr[i] = arr[n - (i+1)];
    arr[n - (i+1)] = tmp;
    i++;
  }

  for( i = 0; i < n; i++ )
  printf("%d ",arr[i]);
  putchar('\n');

  return 0;
}
