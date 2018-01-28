/*
1. Make a program that multiplies two numbers together and 
returns the value. 
2. Add a function to that program that does the factorial calculation 
for a number. 
3. Add a function to that program that "is passed" a number and then 
does the factorial calculation for that number.
BONUS POINTS: USE TWO DIFFERENT LOOPS FOR THE LAST TWO TASKS.
*/

#include <stdio.h>

int multiply(int n, int m) {
  return n * m;
}

// This function calculates the factorial of a number.
// Requires: n >= 0

int factorial1_while(int n) {
  int i = 1;
  int factorial = 1;
  while (i <= n) {
    factorial *=i;
    i++;
  }
  return factorial;
}

int factorial1_for(int n) {
  int factorial = 1;
  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }
  return factorial;
}

void factorial_while() {
  int n = read_int();
  int i = 1;
  int factorial = 1;
  while (i <= n) {
    factorial *= i; // factorial = factorial * i
    i++;
  }
  printf("%d\n", factorial);
}

void factorial_for() {
  int n = read_int();
  int factorial = 1;
  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }
  printf("%d\n", factorial);
}

int main(void) {
  (assert (factorial1_while(4) == 24));
  (assert (factorial1_for(4) == 24));
  factorial_while();
  factorial_for();
}
