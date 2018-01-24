/**
 File: fizzbuzz.c
 Fizz Buzz!
*/

#include <stdio.h>

// fizzBuzzStartAndEnd() prints fizz buzz from the inputted starting integer
// to the ending integer.
// input: int start -> starting integer
//        int end   -> ending integer
void fizzBuzzStartAndEnd (int start, int end) {
  for (int i=start; i<=end; i++) {
    if ((i%3==0) && (i%5==0)) {
      printf("FizzBuzz\n");
    } else if (i%3==0) {
      printf("Fizz\n");
    } else if (i%5==0) {
      printf("Buzz\n");
    } else {
      printf("%d\n", i);
    }
  }
}



// printFizzBuzz() prints the integers from 1 to 20 where every multiple of 3 is
// replaced by fizz, every multiple of 5 is replaced by buzz, and every multiple
// of both 3 and 5 is replaced by fizzbuzz.
void printFizzBuzz() {
  for (int i=1; i<=20; i++) {
    if ((i%3==0) && (i%5==0)) {
      printf("FizzBuzz\n");
    } else if (i%3==0) {
      printf("Fizz\n");
    } else if (i%5==0) {
      printf("Buzz\n");
    } else {
      printf("%d\n", i);
    }
  }
}

int main(void) {
  printFizzBuzz();
  fizzBuzzStartAndEnd(5, 25);

  return 0;
}
