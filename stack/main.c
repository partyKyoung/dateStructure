#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#define arraySize 5

int main(int argc, char const *argv[]) {
  Stack* stack = NULL;
  char* str;
  stack = createStack(5);

  str = "A";
  pushStack(str, stack);

  str = "B";
  pushStack(str, stack);

  str = "C";
  pushStack(str, stack);

  findStack(5, stack);
  findStack(6, stack);
  

  char* str2;

  str2 =  popStack(stack);

  printf("pop - %s\n", str2);
}
