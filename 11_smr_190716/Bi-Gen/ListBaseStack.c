#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "ListBaseStack.h"



void StackInit(Stack * pstack)
{
	
	pstack->head = NULL;
	//pstack->head->next = NULL;
	pstack->ListNumData = 0;
}

int SIsEmpty(Stack * pstack)
{
	if(pstack->head == NULL)
		return TRUE;
	else
		return FALSE;
}

void SPush(Stack * pstack, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));

	if (newNode == NULL) return -1;
	newNode->data = data;
	newNode->next = pstack->head;

	pstack->head = newNode;
	(pstack->ListNumData)++;
	
}

Data SPop(Stack * pstack)
{
	Data rdata;
	Node * rnode;

	if(SIsEmpty(pstack))
	{
		printf("Stack Memory Error!");
		exit(-1);
	}

	rdata = pstack->head->data;
	rnode = pstack->head;

	pstack->head = pstack->head->next;
	free(rnode);
	(pstack->ListNumData)--;
	
	return rdata;
}

Data SPeek(Stack * pstack)
{
	if(SIsEmpty(pstack))
	{
		printf("Stack Memory Error!");
		exit(-1);
	}

	printf("ListNumData : %d \n", pstack->ListNumData);
	return pstack->head->data;
}

void SDestroy(Stack* pstack)
{
	while (!SIsEmpty(pstack))
	{
		printf("Stack Destroy Data : %d \n",SPop(pstack));
	}
	printf("Stack Destroy Complete... \n"); 
	printf("ListNumData : %d \n", pstack->ListNumData);
	
}

//
//void SShow(Stack* pstack)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	SIsEmpty(pstack);
//	newNode = pstack->head;
//	
//	while (newNode->next != NULL)
//	{
//		printf("%d ",newNode->data);
//		newNode = newNode->next;
//	}
//	printf("\n\n 스택 출력 완료...\n");
//	
//}
