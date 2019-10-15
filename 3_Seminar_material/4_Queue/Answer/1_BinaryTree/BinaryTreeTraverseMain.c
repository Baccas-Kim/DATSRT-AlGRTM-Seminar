#include <stdio.h>
#include "BinaryTree.h"

void InorderTraverse(BTreeNode * bt)// 중위순회 출력함수
{
	if(bt == NULL)    // 바이너리 트리가 NULL이면 재귀 탈출!!! 
		return;

	InorderTraverse(bt->left); //재귀, 왼쪽 출력
	printf("%d \n", bt->data); //자기 자신의 데이터 출력
	InorderTraverse(bt->right); //재귀 오른쪽 출력
}//그림 그려서 꼭 이해!!!!

int main(void)
{
	BTreeNode * bt1 = MakeBTreeNode();
	BTreeNode * bt2 = MakeBTreeNode();
	BTreeNode * bt3 = MakeBTreeNode();
	BTreeNode * bt4 = MakeBTreeNode();

	SetData(bt1, 1);//1 생성
	SetData(bt2, 2);//2 생성
	SetData(bt3, 3);//3
	SetData(bt4, 4);//4

	MakeLeftSubTree(bt1, bt2);//그림그리면서 연결구조 상상
	MakeRightSubTree(bt1, bt3);//!!
	MakeLeftSubTree(bt2, bt4);// 그림 그림!!

	InorderTraverse(bt1);//중위순회 출력
	getchar();// 꺼짐 방지
	return 0;
}