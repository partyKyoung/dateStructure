
#define arraySize 5

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

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

  char* str2;

  str2 = findStack(1, stack);

  printf("find - %s\n", str2);
  

  char* str3;

  str3 =  popStack(stack);

  printf("pop - %s\n", str3);
}
