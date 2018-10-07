#ifndef _QUEUE_
#define _QUEUE_

typedef struct ElementType {
  char* str;
  struct ElementType* nextNode;
} Element;

typedef struct QueueType {
  int maxSize;
  int currentSize;
  Element* rearElement;
  Element* frontElement;

} Queue;

Queue* createQueue(int maxSize);
int addQueue(char* str, Queue* queue);
char* deleteQueue(Queue* queue);

#endif