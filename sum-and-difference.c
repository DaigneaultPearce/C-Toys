#include <stdio.h>

int main(){
  //variable declaration
  int x, y;
  float a, b;

  //initialize variables
  scanf("%d %d", &x, &y);
  scanf(" %f %f", &a, &b);

  //print sum and difference
  printf("%d %d\n%.1f %.1f\n", (x + y), (x - y), (a + b), (a - b));
  //printf("%d %d\n%.1f %.1f\n", x, y, a, b);
  return 0;
}
