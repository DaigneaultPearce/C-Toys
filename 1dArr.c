/*Daigneault Pearce
Create a dynamic array, sum its values*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  //declare variables
  int sum, n, i;
  int *arr = (int*)(malloc(n * sizeof(int)));

  //initialize values
  sum = n = i = 0;

  //read size of arr
  scanf("%d", &n);

  //read each integer into the array and record running total
  for ( i = 0; i < n; i++ ){
      scanf("%d", &arr[i]);
      sum += arr[i];
  }

  free(arr);
  //display results
  printf("%d\n", sum);
  return 0;
}
