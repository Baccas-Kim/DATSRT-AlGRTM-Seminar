#include <stdio.h>
#include <stdlib.h>
#include "arrstack.h"


void StackInit(Stack *pstack)
{
  pstack->topIndex = -1;
}
int SIsEmpty(Stack *pstack)
{
  if(pstack->topIndex == -1)
    return TRUE;
  else
    return FALSE;
}
void SPush(Stack *pstack, Data data) 
{
  pstack->topIndex += 1;
  pstack->stackArr[pstack->topIndex] = data;
}
Data Spop(Stack *pstack)
{
  int rIdx;
  if(SIsempty(pstack)
  {
    printf("Stack Memory ERROR!!");
    exit(-1);
  }
  rIdx = pstack->topIndex;
  pstack->topIndex -=1;
  return pstack->stackArr[rIdx];
}

Data SPeek(Stack *pstack)
{
  if(SIsempty(pstack)
  {
    printf("Stack Memorr ERROR!!");
    exit(-1);
  }
  return pstack->stackArr[pstack->topIndex];
}
