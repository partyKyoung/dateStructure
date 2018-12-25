#ifndef _STACK_
#define _STACK_

// 스택에 쌓일 데이터 구조
typedef struct ElementType {
  char* str; // 데이터
  struct ElementType* prevNode; // 이전 노드를 가리키는 포인터 =
} Element;

// 스택
typedef struct StackType {
  Element *topNode; // top
  int maxSize; // 스택의 최대 크기
  int currentSize; // 스택의 현재 크기
} Stack;

/**
 * 원하는 크기를 가진 스택을 생성해준다. 
 * @param {int} maxSize 스택의 최대 크기
 */
Stack* createStack(int maxSize);


int pushStack(char* str, Stack* stack);

/**
 * 스택에 원하는 값을 pop 하는 함수
 * @param {Stack} stack 값을 제거할 스택
 */
char* popStack(Stack* stack);


char* findStack(int index, Stack* stack);