#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int data;
	struct Node *prev;
	struct Node *next;
} Node; // Node struct declaration

Node *head, *tail;// head, tail node pointer declar

void insert(int data){//insert func def
	Node *node = (Node*) malloc(sizeof(Node));// mem alloc at where (*node) pointing is
	Node* cur;// de
	Node* prev
	node -> data = data;// data save in struct data
	cur = head -> next;
	while(cur -> data < data && cur != tail){
		cur = cur->next;
	}
	prev = cur->prev;
	prev->next = node;
	node->prev = prev;
	cur->prev = node;
	node->next = cur;
}

void removeFront(){
	Node *node = head->next;
	head -> next = node->next;
	Node *next = node->next;
	next -> prev = head;
	free(node);
}

void show(){
	Node *cur = head->next;
	while(cur != tail){
		printf("%d \n", cur->data);
		cur = cur -> next;
	}
}

int main(void){
	head = (Node*)malloc(sizeof(Node));
	tail = (Node*)malloc(sizeof(Node));
	head -> next = tail;
	head -> prev = head;
	tail -> next = tail;
	tail -> prev = head;

	insert(2);
	insert(1);
	insert(3);
	insert(9);
	insert(7);

	removeFront();
	show();

	return 0;
}
