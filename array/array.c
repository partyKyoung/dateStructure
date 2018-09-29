#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define arraySize 5

int *createArray(int n) {
  int *arr = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    arr[i] = 0;
  }

  return arr;
}

int retrieve(int *arr, int i) {
  if (i < 0 || i >= arraySize) {
    return -1;
  }

  return arr[i];
}

void store(int *arr, int i, int e) {
  if (i < 0 || i >= arraySize) {
    printf("error\n");

    return;
  }

  arr[i] = e;
}