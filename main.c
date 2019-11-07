#include <stdio.h>
#include <stdlib.h>
#include  <time.h>

#include "dynamic_fibonacci.h"
#include "fibonacci.h"


int main(void) {
  int input;
  scanf("%d", &input);
  int vetor[input];
  printf("Dynamic Fibonacci(%d): %lld\n", input, dynamic_fibonacci(input));
  printf("Fibonacci(%d): %lld\n",input, fibonacci(input));
  return 0;
  
}