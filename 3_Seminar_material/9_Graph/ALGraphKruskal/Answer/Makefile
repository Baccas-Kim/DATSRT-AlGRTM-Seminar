OBJS	= PriorityQueue.o UsefulHeap.o ALGraphKruskal.o ArrayBaseStack.o DLinkedList.o KruskalMain.o
SOURCE	= PriorityQueue.c UsefulHeap.c ALGraphKruskal.c ArrayBaseStack.c DLinkedList.c KruskalMain.c
HEADER	= ALEdge.h ALGraphKruskal.h ArrayBaseStack.h DLinkedList.h PriorityQueue.h UsefulHeap.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

PriorityQueue.o: PriorityQueue.c
	$(CC) $(FLAGS) PriorityQueue.c -std=c99

UsefulHeap.o: UsefulHeap.c
	$(CC) $(FLAGS) UsefulHeap.c -std=c99

ALGraphKruskal.o: ALGraphKruskal.c
	$(CC) $(FLAGS) ALGraphKruskal.c -std=c99

ArrayBaseStack.o: ArrayBaseStack.c
	$(CC) $(FLAGS) ArrayBaseStack.c -std=c99

DLinkedList.o: DLinkedList.c
	$(CC) $(FLAGS) DLinkedList.c -std=c99

KruskalMain.o: KruskalMain.c
	$(CC) $(FLAGS) KruskalMain.c -std=c99


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)