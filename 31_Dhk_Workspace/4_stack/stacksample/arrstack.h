#ifndef __ARR_STACK_H__
#define __ARR_STACK_H__

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef int Data;

typedef struct _arrStack
{
  Data stackArr[ATACK_LEN]
  int topIndex;
}

typedef ArraryStack Stack;

void StackInit(Stack *pstack);
int SIsEmpty(Stack *pstack);
void SPush(Stack *pstack, Data data); 
Data Spop(Stack *pstack);
Data SPeek(Stack *pstack);

#endif
