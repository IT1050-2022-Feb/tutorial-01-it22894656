/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

#define firstKms 30    // first km limit
#define firstKmRate 50 // cost per km in first kms
#define afterkmRate 40 // cost per km in after

int main() {
  float dis = 0, amount = 0;

  printf("Distance -> ");
  scanf("%f", &dis);

  if (dis <= firstKms) {
    amount = dis * firstKmRate;
    printf("amount = %.1f * %d = %.0f\n", dis, firstKmRate, amount);

  } else if (dis > firstKms) {
    amount = (firstKms * firstKmRate) + ((dis - firstKms) * afterkmRate);
    printf("amount = %d * %d + (%.1f-%d) * %d = %.0f\n", firstKms, firstKmRate,
           dis, firstKms, afterkmRate, amount);
  }

  return 0;
}
