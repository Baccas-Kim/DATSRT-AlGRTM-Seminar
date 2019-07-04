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
	Node* prev;
	node -> data = data;// data save in struct data
	cur = head -> next;//init cur pointer
	while(cur -> data < data && cur != tail){
		cur = cur->next;//cur position setting
	}
	prev = cur->prev;//setting prev pos
	prev->next = node;//prev node set pointing me!
	node->prev = prev;//my node settinf pointing prev

	cur->prev = node;//cur(in front order inserted node) prev pointer is pointing me
	node->next = cur;//i am pninting is pointerting next
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

void recursive(int order) {//if empty List -> has hazards of infinity Loop
    int i=0;
    int f_data=0;
   // Node *start = head->next;
    Node *curNode = head->next;
    for(i=0;i<order;i++) {
        curNode = curNode->next;
        //printf("curNode->data : %d\n",curNode->data );
        //num_of_ll++;
	}
    f_data = curNode->data;
    //printf("f_data : %d\n",f_data );

    for(i=0;i<100;i++){
        if(curNode->next == tail) {
            //printf("end of list");
            printf("%d \n", curNode->data);
            curNode = head->next;
        }
        else {
            printf("%d \n", curNode->data);
            curNode = curNode -> next;
            if(f_data == curNode->data) {
                return;
            }

        }
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
    printf("recursive\n");
    recursive(2);
	return 0;
}
