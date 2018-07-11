#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *s, c;
    int i, dig[10];

    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    for ( i = 0; i < 10; i++)
        dig[i] = 0;

    for ( i = 0; i < strlen(s); i++ ){
        c = s[i];
        if ( c >= '0' || c <= '9' )
            ++dig[c - '0'];
    }

    for ( i = 0; i < 10; i++ )
        printf("%d ", dig[i]);
        putchar('\n');

    return 0;
}
