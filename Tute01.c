/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  double num1, num2, avg;

  printf("Enter 1st number: ");
  scanf("%lf", &num1);

  printf("Enter 2nd number: ");
  scanf("%lf", &num2);

  avg = (num1 + num2)/2.0;
  printf("The average is: %.2lf", avg);

  return 0;
}

