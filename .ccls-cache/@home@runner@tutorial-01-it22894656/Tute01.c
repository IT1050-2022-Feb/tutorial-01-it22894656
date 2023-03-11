/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  float sub1 = 0, sub2 = 0, avg = 0;

  printf("Enter the marks for subject1 : ");
  scanf("%f", &sub1);
  printf("Enter the marks for subject2 : ");
  scanf("%f", &sub2);

  avg = (sub1 + sub2) / 2.0;

  printf("\navarage = %.2f\n", avg);

  return 0;
}
