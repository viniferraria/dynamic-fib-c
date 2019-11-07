#include "fibonacci.h"

unsigned long long int fibonacci(int x){
  if(x < 2) return x;
  return fibonacci(x-1) + fibonacci(x-2);
}