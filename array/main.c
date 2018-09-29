#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define arraySize 5

int main(int argc, char const *argv[]) {
  int * arr = createArray(arraySize);
  int findNum = 0;

  for(int i = 0; i < arraySize; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  store(arr, 2, 2);
  store(arr, 4, 4);

  findNum = retrieve(arr, 4);

  printf("findNum: %d\n", findNum);
}
