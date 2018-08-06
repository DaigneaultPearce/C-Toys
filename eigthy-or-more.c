/*Exercise 1-17 from C programming language. My code will be
specifically commented and the rest is from the book.
I am only making a modification.
Daigneault Perce*/
#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);

int main()
{
  int len; // current line length
  char line[MAXLINE]; // current input line

  while( (len = getLine(line, MAXLINE) ) > 0)
  {
     /*modification to code begins here. Print lines
     with length greater than 80*/
     if( len > 80 ){
        printf("Found line longer than length eighty. size: %d\n", len - 1);
        printf("and reads: %s\n",line);
    }
    //end of modification.
  }
}  return 0;

// read a line into s, return length
int getLine(char s[], int lim)
{
   int c, i;
   for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
   {
     s[i] = c;
   }
   if(c == '\n')
   {
     s[i] = c;
     ++i;
   }
   s[i] = '\0';
   return i;
}
