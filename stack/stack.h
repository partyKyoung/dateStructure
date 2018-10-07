#ifndef _STACK_
#define _STACK_

typedef struct ElementType {
  char* str;
  struct ElementType* prevNode;
} Element;

typedef struct StackType {
  Element *topNode;
  int maxSize;
  int currentSize;
} Stack;

Stack* createStack(int maxSize);
int pushStack(char* str, Stack* stack);
char* popStack(Stack* stack);

#endif