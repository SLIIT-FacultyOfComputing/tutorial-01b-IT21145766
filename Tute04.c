/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(n1, n2){
  if(n1 < n2){
    return n1;
  }else if(n2 < n1){
    return n2;
  }else{
    return n1; //As both are equal
  }
}

int maximum(n1, n2){
  if(n1 < n2){
    return n2;
  }else if(n2 < n1){
    return n1;
  }else{
    return n1; //As both are equal
  }
}

int multiply(n1, n2){
  return n1 * n2;
}

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
