#include "SimpleHeap.h"

void HeapInit(Heap * ph)
{
	ph->numOfData = 0;
}

int HIsEmpty(Heap * ph)
{
	if(ph->numOfData == 0)
		return TRUE;
	else
		return FALSE;
}

int GetParentIDX(int idx) 
{ 
	return idx@@@;//@Todo:왼쪽자식 노드번호 얻는방법
}

int GetLChildIDX(int idx) 
{ 
	return idx@@@;//@Todo:왼쪽자식 노드번호 얻는방법
}

int GetRChildIDX(int idx) 
{ 
	return GetLChildIDX(idx)+1; 
}

int GetHiPriChildIDX(Heap * ph, int idx)//@ 이 함수는 높은 우선순위의 '인덱스'를 리턴해주는 함수입니다
{
	if(GetLChildIDX(idx) > @@@ 여기를 채워주세요 @@@ )    // 자식 노드가 없다면  //@Todo: 자식노드가 없다고 확인하는 방법
		return 0;

	else if(GetLChildIDX(idx) == @@@ 여기를 채워주세요 @@@ )    // 왼쪽 자식 노드가 마지막 노드라면 //@Todo : 왼쪽노드만 존재하고 오른쪽노드는 비어있다면
		return GetLChildIDX(idx);

	else   // 왼쪽 자식 노드와 오른쪽 자식 노드의 우선순위를 비교 //@Todo의 힌트 : 왼쪽 노드, 오른쪽노드 모두 채워진 상태
	{ //여기로 코드가 들어온것은 오른쪽 및 왼쪽 노드 모두 데이터로 채워저있다.
		if(ph->heapArr[/*@@@여기에 들어갈것은?*/].pr > /*@@@여기에 들어갈것은?*/ )//@Todo : 우선순위를 비교하는데 
			return GetRChildIDX(idx);//윗줄을 간단히 하면 : if(a>b) 문임
		else
			return GetLChildIDX(idx);
	}
}

void HInsert(Heap * ph, HData data, Priority pr)
{
	int idx = ph->numOfData+1;
	HeapElem nelem = {pr, data}; 

	while(idx != 1)
	{
		if(pr < (ph->heapArr[GetParentIDX(idx)].pr))//@이 코드가 의미하는 바는?
		{
			ph->heapArr[idx] = ph->heapArr[/*@@@여기를 변경*/];//@Todo : 힙의 엘리먼트를 교체
			idx = /*@@@여기를 변경*/;//@Todo : 인덱스를 교체
		}
		else
			break;
	}
	
	ph->heapArr[idx] = nelem;//이 코드가 의미하는 바를 적어주세요
	ph->numOfData += 1;
}

HData HDelete(Heap * ph)
{
	HData retData = (ph->heapArr[1]).data;    // 삭제할 데이터 임시 저장
	HeapElem lastElem = ph->heapArr[ph->numOfData];

	int parentIdx = 1;    // 루트 노드의 Index
	int childIdx;

	while(childIdx = /*@@@*/(ph, parentIdx))//@Todo : 호출할 함수의 이름
	{
		if(lastElem.pr <= ph->heapArr[childIdx].pr)
			break;

		ph->heapArr[parentIdx] = ph->heapArr[/*@@@*/];//Todo 알맞은 인덱스는?
		parentIdx = /*@@@*/;//Todo 알맞은 인덱스는?, 위와 동일
	}

	ph->heapArr[parentIdx] = lastElem;
	ph->numOfData -= 1;
	return retData;
}