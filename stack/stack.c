#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

Stack *createStack(int maxSize){
  Stack *newStack = NULL;

  newStack = (Stack *)malloc(maxSize * sizeof(Stack));

  if (newStack == NULL){
    printf("\n메모리 할당에 오류가 발생하여 스택을 생성하지 못했습니다.\n");
    return NULL;
  }

  memset(newStack, 0, sizeof(Stack));

  newStack->currentSize = 0;
  newStack->maxSize = maxSize;

  return newStack;
};

int pushStack(char *str, Stack *stack)
{
  // 스택이 가득 차면 현재 스택 사이즈를 리턴하며 함수 종료.
  if (stack->currentSize == stack->maxSize){
    printf("\n스택이 가득 차서 push를 할 수 없습니다.\n");

    return stack->maxSize;
  }

  Element *newElement = (Element *)malloc(sizeof(Element));

  if (newElement == NULL){
    printf("\n메모리 할당에 오류가 발생하여 데이터를 생성하지 못했습니다.\n");
    return -1;
  }

  newElement->str = str;
  newElement->prevNode = stack->topNode;

  stack->topNode = newElement;
  stack->currentSize += 1;

  return stack->currentSize;
};

char *popStack(Stack *stack){
  Element *removeElement = NULL;

  if (stack->currentSize == 0){
    printf("\n비어있는 스택입니다.\n");

    return str;
  }

  removeElement = stack->topNode;

  stack->topNode = removeElement->prevNode;
  stack->currentSize -= 1;

  removeElement->prevNode = NULL;

  return removeElement;
};

/**
 * top 확인하는 함수
 */
Element* peekStack(Stack* stack){
  Element *topNode = NULL;

  if(stack->topNode !== NULL) {
    topNode = stack->topNode;
  }

  return topNode;
};