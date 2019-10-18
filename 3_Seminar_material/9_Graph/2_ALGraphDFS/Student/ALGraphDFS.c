//========================================================================================
/*========================================================================================
//========================================================================================

Question1. 코드완성 - GraphInit() 함수속 동적할당의 크기를 결정하기
Question2. 코드완성 - GraphDestroy() 함수 구현하기
Question3. 코드완성 - GraphDestroy() 함수 속 free 함수 완성하기
Question4. 주석달기 - 2Line에 걸처 LInsert() 함수가 호출되는 의미를 그래프 자료구조와 연결시켜 설명하기
Question5. 주석달기 - ShowGraphEdgeInfo() 함수 완성하기


To Do : 지울꺼 지우고 DFS 이해하고 구현하고??

//========================================================================================
========================================================================================*/
//========================================================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ALGraphDFS.h"
#include "DLinkedList.h"
#include "ArrayBaseStack.h"

int WhoIsPrecede(int data1, int data2);

// 그래프의 초기화
void GraphInit(ALGraph * pg, int nv)
{
	int i;	

	pg->adjList = (List*)malloc(sizeof(List)*nv);
	pg->numV = nv;
	pg->numE = 0;     // 초기의 간선 수는 0개

	for(i=0; i<nv; i++)
	{
		ListInit(&(pg->adjList[i]));
		SetSortRule(&(pg->adjList[i]), WhoIsPrecede); 
	}

	// 탐색 정보 등록을 위한 공간의 할당 및 초기화
	pg->visitInfo= (int *)malloc(sizeof(int) * pg->numV);
	memset(pg->visitInfo, 0, sizeof(int) * pg->numV);
}

// 그래프의 리소스 해제
void GraphDestroy(ALGraph * pg)
{
	if(pg->adjList != NULL)
		free(pg->adjList);

	if(pg->visitInfo != NULL)
		free(pg->visitInfo);
}

// 간선의 추가
void AddEdge(ALGraph * pg, int fromV, int toV)
{
	LInsert(&(pg->adjList[fromV]), toV);
	LInsert(&(pg->adjList[toV]), fromV);
	pg->numE += 1;
}

// 유틸리티 함수: 간선의 정보 출력
void ShowGraphEdgeInfo(ALGraph * pg)
{
	int i;
	int vx;

	for(i=0; i<pg->numV; i++)
	{
		printf("%c between connected Vertex: ", i + 65);
		
		if(LFirst(&(pg->adjList[i]), &vx))
		{
			printf("%c ", vx + 65);
			
			while(LNext(&(pg->adjList[i]), &vx))
				printf("%c ", vx + 65);
		}
		printf("\n");
	}
}

int WhoIsPrecede(int data1, int data2)
{
	if(data1 < data2)
		return 0;
	else
		return 1;
}


int VisitVertex(ALGraph * pg, int visitV)
{
	if(pg->visitInfo[visitV] == 0)
	{
		pg->visitInfo[visitV] = 1;
		printf("%c ", visitV + 65);     // 방문 정점 출력
		return TRUE;
	}
	
	return FALSE;
}

// Depth First Search: 정점의 정보 출력
void DFShowGraphVertex(ALGraph * pg, int startV)
{

	//초기화 부분
	Stack stack;
	int visitV = startV;
	int nextV;
	StackInit(&stack);		 	// DFS를 위한 스택의 초기화

	//그래프의 시작지점 방문
	VisitVertex(pg, visitV);	// 시작 정점 방문
	SPush(&stack, visitV);		// 

	// while(LFirst(&(pg->adjList[visitV]), &nextV) == TRUE) - 코드의 의미 : 모든 정점의 방문이 이루어진다
	while(LFirst(&(pg->adjList[visitV]), &nextV) == TRUE)
	{
		int visitFlag = FALSE;
		//next V에 담긴 정점의 정보를 가지고 방문을 시도한다
		if(VisitVertex(pg, nextV) == /*/Q1 TRUE or FALSE/*/)
		{//nextV의 방문에 성공한 경우
			
			SPush(/*/Q2/*/); 	//visitV의 정보는 스텍에 PUSH
			visitV = nextV;			//
			visitFlag = TRUE;		//
		}
		else
		{//nextV의 방문에 실패한 경우
			while(LNext(&(pg->adjList[visitV]), &nextV) == TRUE)//vistV에 연결된 정점을 찾을때까지 반복
			{
				if(VisitVertex(pg, nextV) == TRUE)
				{
					SPush(&stack, visitV);
					visitV = nextV;
					visitFlag = TRUE;
					break;
				}
			}
		}
		
		if(visitFlag == FALSE)
		{
			if(SIsEmpty(&stack) == TRUE)    // 스택이 비면 DFS종료
				break;
			else
				visitV = SPop(&stack);	
		}
	}

	// 탐색 정보 초기화
	memset(pg->visitInfo, 0, sizeof(int) * pg->numV);
}
