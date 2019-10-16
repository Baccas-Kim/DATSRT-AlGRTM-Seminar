//========================================================================================
/*========================================================================================
//========================================================================================

Question1. 코드완성 - GraphInit() 함수속 동적할당의 크기를 결정하기
Question2. 코드완성 - GraphDestroy() 함수 구현하기
Question3. 코드완성 - GraphDestroy() 함수 속 free 함수 완성하기
Question4. 주석달기 - 2Line에 걸처 LInsert() 함수가 호출되는 의미를 그래프 자료구조와 연결시켜 설명하기
Question5. 주석달기 - ShowGraphEdgeInfo() 함수 완성하기

//========================================================================================
========================================================================================*/
//========================================================================================
#include <stdio.h>
#include <stdlib.h>
#include "ALGraph.h"
#include "DLinkedList.h"

int WhoIsPrecede(int data1, int data2);

// 그래프의 초기화
void GraphInit(ALGraph * pg, int nv)
{
	int i;	

	//얼마만큼의 메모리를 할당받아야 할까?
	//hint1 : nv = nomber of Vertex
	//hint2 : 그래프 자료구조이지만 List로 구현이 된다, typedef LinkedList List
	pg->adjList = (List*)malloc(/*/Question1/*/);
	pg->numV = nv;
	pg->numE = 0;     // 초기의 간선 수는 0개

	//정점의 수만큼 생성된 리스트를 초기화한다
	for(i=0; i<nv; i++)
	{
		
		ListInit(&(/*/Question2/*/));
		SetSortRule(&(pg->adjList[i]), WhoIsPrecede);//리스트의 정렬 기준을 설정
		//알파벳 순 출력을 위해서 정렬기준을 설정한 코드임.(기능과는 상관없음 - 545page)

	}
}

// 그래프 리소스의 해제
void GraphDestroy(ALGraph * pg)
{
	//ALGraph 형태의 graph 핸들러 구조체의 주소를 다운받아 동적할당된 메모리를 해제해주세요
	//hint : 구조체 변수 pg의 맴버변수 adjList 
	if(pg->adjList != NULL) {
		free(/*/Question3/*/);
	}

}

// 간선의 추가
void AddEdge(ALGraph * pg, int fromV, int toV)
{
	//아래 2Line에 걸처 LInsert() 함수가 호출되는 의미를 그래프 자료구조와 연결시켜 설명하기
	LInsert(&(pg->adjList[fromV]), toV);
	LInsert(&(pg->adjList[toV]), fromV);
	/*/Question3/*/
	//이유 :  
	pg->numE += 1;
}

// 유틸리티 함수: 간선의 정보 출력
void ShowGraphEdgeInfo(ALGraph * pg)
{
	int i;
	int vx;

	for(i=0; i<pg->/*/Question5/*/; i++)
	{
		printf("%c between connected Vertex: ", i + 65);
		// %c 와 연결된 정점 : 
		if(LFirst(&(pg->adjList[i]), &vx))
		{
			printf("%c ", vx + 65);
			
			while(LNext(&(pg->/*/Question5/*/), &vx))
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
