#include <stdio.h>
#include <stdlib.h>

void insertionSort(int*, int);
void insertionSort(int *a, int n){
    int i, j, tmp;

    for( i = 1; i < n; i++){
        j = i;
        while (j > 0 && (a[j] < a[j - 1])){
            tmp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = tmp;
            j--;
        }
    }
}

int main(){
    int *a, n, i;

    printf("-----Insertion Sort-----\n");
    printf("How many integers will be sorted?\n");
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));

    for( i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    insertionSort(a, n);

    for( i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
