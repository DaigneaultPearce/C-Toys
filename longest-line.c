/*Exercise 1-16 from C programming language. My code will be
specifically commented and the rest is from the book.
I am only making a modification.
Daigneault Perce*/
#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  int len; // current line length
  int max; // maximum length seen so far
  char line[MAXLINE]; // current input line
  char longest[MAXLINE]; // longest line saved here

  max = 0;
  while( (len = getLine(line, MAXLINE) ) > 0)
  {
     /*modification to code begins here. Print the length of the line.
     and as much as possible of the text*/
     if( len > 0 ){
        printf("length of current line including CR is %d\n", len - 1);
        printf("and reads: %s\n",line);
    }
    //end of modification.
     if(len > max)
     {
        max = len;
        copy(longest, line);
     }
  }
  if(max > 0) // there was a line
  {
     printf("\n%s\n", longest);
  }
  return 0;
}

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

// copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[])
{
   int i;
   i = 0;
   while( (to[i] = from[i]) != '\0')
    ++i;
}
