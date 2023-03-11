/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

int main() {
  int i, n = 0, sum = 0;

  printf("n -> ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    sum += i + 1;
  }

  if (n <= 5) {
    printf("sum = ");
    for (i = 0; i < n - 1; i++) {
      printf("%d+", i + 1);
    }
    printf("%d = %d\n", n, sum);

  } else if (n > 5) {
    printf("sum = 1+2+3+....+");
    for (i = n - 3; i < n - 1; i++) {
      printf("%d+", i + 1);
    }
    printf("%d = %d\n", n, sum);
  }

  return 0;
}
