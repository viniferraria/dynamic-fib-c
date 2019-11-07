#include <stdlib.h>
#include "dynamic_fibonacci.h"

unsigned long long int dynamic_fibonacci(int x){ 
  int tam = (x+1);
  long long int * vetor = (long long int*)malloc(tam * sizeof(long long int));
  for(int i = 0; i < tam; i++){
    if(i < 2) vetor[i] = i;
    else{
    vetor[i] = vetor[i-1] + vetor[i-2];
    }
  }
  return vetor[x];
}

