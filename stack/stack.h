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

/* 
  스택 생성 함수 - 스택의 크기가 maxsize인 빈 스택을 생성하고 반환한다.
*/
Stack* createStack(int maxSize);

/* 
  스택 push 함수 - 스택의 가장 위에 item을 삽입하고 현재 스택의 크기를 반환한다.
*/
int pushStack(char* str, Stack* stack);

/* 
  스택 pop 함수 - 스택의 가장 위의 item을 제거 하면서 제거 당하는 item의 데이터 값을 반환해준다.
*/
char* popStack(Stack* stack);


char* findStack(int index, Stack* stack);