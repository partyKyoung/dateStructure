#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

LinkedList* createLinkedList() {
  LinkedList* newNode;

  newNode = (LinkedList *)malloc(sizeof(LinkedList));

  if (newNode == NULL) {
    printf("Error - 링크드리스트 생성 실패\n");

    return NULL;
  }

  return newNode;
};

void addLinkedList(int data, int position, LinkedList* list) {
  Node* newNode;
  Node* lastNode;

  if (position <= 0 || position > list->currentSize) {
    printf('Error - 잘못된 위치\n');

    return NULL;
  }

  newNode = (Node *)malloc(sizeof(Node));

  if (newNode == NULL) {
    printf("Error - 링크드리스트 노드 추가 실패\n");
    
    return NULL;
  }

  newNode->data = data;
  newNode->nextNode = NULL;

  // 링크드리스트가 비어있을 때
  if (list->head == NULL) {
    list->head = newNode;

    return;
  }

  // 링크드리스트가 비어있지 않을 때
  lastNode = list->head;

  for (int i = 0; i < position; i++) {
    lastNode = lastNode->nextNode;
  }
  
  lastNode->nextNode = newNode;
};

int deleveLinkedList(int index);
int selectLinkedList(int index);
