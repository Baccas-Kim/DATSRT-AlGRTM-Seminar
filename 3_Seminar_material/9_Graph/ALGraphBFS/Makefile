OBJS	= ALGraphBFS.o BFSMain.o CircularQueue.o DLinkedList.o
SOURCE	= ALGraphBFS.c BFSMain.c CircularQueue.c DLinkedList.c
HEADER	= ALGraphBFS.h CircularQueue.h DLinkedList.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

ALGraphBFS.o: ALGraphBFS.c
	$(CC) $(FLAGS) ALGraphBFS.c -std=c99

BFSMain.o: BFSMain.c
	$(CC) $(FLAGS) BFSMain.c -std=c99

CircularQueue.o: CircularQueue.c
	$(CC) $(FLAGS) CircularQueue.c -std=c99

DLinkedList.o: DLinkedList.c
	$(CC) $(FLAGS) DLinkedList.c -std=c99


clean:
	rm -f $(OBJS) $(OUT)