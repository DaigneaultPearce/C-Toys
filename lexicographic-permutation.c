/*Daigneault Pardo Pearce
This is the solution to hacker rank problem
Permutation of strings which asks for the lexicographic ordering
of strings.
From my research I found an algo created by a woman by the name of
Narayana Pandita which I implemented in C*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//my code

int next_permutation(int n, char **s)
{
    int hasNext, k, l, i;
    char *tmp;
    hasNext = l = 0;
    //find k
    for(i = n - 1; i > 0; i--){
        if( *s[i - 1] < *s[i]){
            printf("-%s %s-", s[i-1],s[i]);
            k = i - 1;
            hasNext = 1;
            break;
        }
    }
    //find l
    for(i = n - 1; i > k; i--){
        if( s[i] > s[k]){
            l = i;
            break;
        }
    }
    //swap k and l
    tmp = s[k];
    s[k] = s[l];
    s[l] = tmp;
    //reverse from k+1 to n
    for( i = k + 1; i < n - 1; i++ ){
        tmp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = tmp;
    }

	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    return hasNext;
}
//end of my code
int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
