#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(int argc, char const *argv[]) {
  Queue* queue = NULL;
  char* str;
  queue = createQueue(5);

  str = "A";
  addQueue(str, queue);

  str = "B";
  addQueue(str, queue);

  str = "C";
  addQueue(str, queue);

  Element* node = queue->frontElement;

  for (int i = 0; i < queue->currentSize; i++) {
    printf("%s\n", node->str);

    node = node->nextNode;
  }

}
