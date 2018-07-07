/*Daigneault Pearce
Solution to sum of marks(grades) by gender
My solution is in marks_solution function.
main function code was provided by hackrank.*/

#include <stdio.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender) {
    int sum, i;
    sum = i = 0;
    if( gender == 'b' || gender == 'B' ){
      for ( i = 0; i < number_of_students; i += 2)
          sum += marks[i];
    }
    else if( gender == 'g' || gender == 'G' ){
      for ( i = 1; i < number_of_students; i += 2)
          sum += marks[i];
    }
    else
      printf("error\n");

    return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}
