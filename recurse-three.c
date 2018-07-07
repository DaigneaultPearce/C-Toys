/*Daigneault Pearce
Solution to recursive series, "sum of last three"*/
#include <stdio.h>


int find_nth_term(int n, int a, int b, int c) {

  int term;
  //base case n = {1, 2, 3}
  if ( n == 1 )
      term = a;
  else if ( n == 2 )
      term = b;
  else if ( n == 3 )
      term = c;
  //otherwise recursively call the previous three and collect their sum
  else{
      term = find_nth_term( n-1, a, b, c) + find_nth_term( n-2, a, b, c)
      + find_nth_term( n-3, a, b, c);
  }

  return term;

}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
