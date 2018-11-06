typedef struct NodeType {
  int data;
  struct NodeType* nextNode;
} Node;

typedef struct LinkedListType {
  int currentSize;
  struct LinkedListType* head;
} LinkedList;

LinkedList* createLinkedList();
void addLinkedList(int data, int position, LinkedList* list);
int deleveLinkedList(int index);
int selectLinkedList(int index);
