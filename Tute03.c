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
  int n, i, sum;
  printf("Enter a value for n: ");
  scanf("%i", &n);

  i = 0;
  sum = 0;
  while(i <= n){
    sum = sum + i;
    i++;
  }
  printf("The sum from 1 to %i is : %i", n, sum);
  return 0;
}

