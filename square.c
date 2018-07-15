/*Daigneault Pearce
Solution to hackerranks square printing
input is a single integer
output will print evolving square showing distances from center
https://www.hackerrank.com/challenges/printing-pattern-2/problem
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //declaration
    int n, i, j,length, center;
    scanf("%d", &n);
    //definition
    //length offset by 1 for zero indexing
    length = ((2 * n) - 1);
    center = length / 2;
    //check distance from middle on x and y coordinates.
    //print largest + origin value of 1
    for ( i = 0; i < length; i++ ){
        printf("\n");
        for ( j = 0; j < length; j++ ){
            printf("%d ", (int)(1 + fmax(abs(center - i), abs(center - j))));
        }
    }
    putchar('\n');
    return 0;
}
