#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define arraySize 5

/*
#include<stdio.h>
void main() {
   char *weekdays[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
   printf("length=%d", sizeof(weekdays)/sizeof(weekdays[0]));
   // length=7
}
*/

int* createArray(int n) {
  int *array;
    array = malloc(n * sizeof(*array));
}

int retrieve(int *arr, int i) {

}

void store(int *arr, int i, int e) {

}