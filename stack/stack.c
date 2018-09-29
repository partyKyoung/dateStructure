#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack* createStack(int maxSize) {
  Stack* newStack = NULL;

  newStack = (Stack *)malloc(maxSize * sizeof(Stack));

  if (newStack == NULL) {
    printf("\n메모리 할당에 오류가 발생하여 스택을 생성하지 못했습니다.\n");
    return NULL;
  }

  memset(newStack, 0, sizeof(Stack));

  return newStack;
};

int pushStack(char str, Stack* stack) {
  if (stack->currentSize == stack->maxSize) {
    printf("\n스택이 가득 차서 push를 할 수 없습니다.\n");

    return stack->maxSize;
  }

  Element* newElement = (Element *)malloc(sizeof(Element));

  if (newElement == NULL) {
    printf("\n메모리 할당에 오류가 발생하여 데이터를 생성하지 못했습니다.\n");
    return -1;
  }

  newElement->prevNode = stack->topNode;
  stack->topNode = newElement;
  stack->currentSize +=1;

  return stack->currentSize;
};

char popStack(Stack* stack) {
  Element* removeElement = stack->topNode;

  if (stack->currentSize == 0 ) {
    printf("\n비어있는 스택입니다.\n");

    return '\n';
  }

  stack->topNode = removeElement->prevNode;

  char str[1] = removeElement->str;

  free(removeElement);

  return str;
};

char popStack(Stack* stack) {
  Element* element = stack->topNode;

  return element->str;
}