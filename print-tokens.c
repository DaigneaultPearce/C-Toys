/*Daigneault Pearce
Print each word of a string on a new line*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
  char *s, c;
  int i, j;

  s = malloc( 1024 * sizeof(char));
  scanf("%[^\n]", s);
  s = realloc(s, strlen(s));
  i = 0;
  j = strlen(s);
  printf("string is size %d.\n", j);

  for ( i = 0; i < strlen(s); i++){
    c = s[i];
    if(c == ' ')
      putchar('\n');
    else
      putchar(c);
  }
  putchar('\n');
  return 0;
}
