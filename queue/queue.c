#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"

Queue* createQueue(int maxSize) {
  Queue* newQueue = NULL;

  newQueue = (Queue *)malloc(sizeof(Queue) *maxSize);

  if (newQueue == NULL) {
    printf("메모리 할당에 오류가 발생하여 스택을 생성하지 못했습니다.\n");
    return NULL;
  }

  newQueue->currentSize = 0;
  newQueue->maxSize = maxSize;
  newQueue->frontElement = NULL;
  newQueue->rearElement = NULL;


  return newQueue;
};

int addQueue(char* str, Queue* queue) {
  if (queue->currentSize == queue->maxSize) {
    printf("큐가 꽉 찼습니다.\n");

    return -1;
  }

  Element* newElement = NULL;

  // 새 Element 생성 및 초기화
  newElement = (Element *)malloc(sizeof(Element));
  newElement->str = str;
  newElement->nextNode = NULL;

  // Queue에 생성된 Element 추가
  if (queue->frontElement == NULL) {
    queue->frontElement = newElement;
  }

  if (queue->rearElement != NULL) {
    Element* currentRearElement = queue->rearElement;

    currentRearElement->nextNode = newElement;
  }

  queue->rearElement = newElement;
  queue->currentSize += 1;


  return queue->currentSize;
};

char* deleteQueue(Queue* queue);