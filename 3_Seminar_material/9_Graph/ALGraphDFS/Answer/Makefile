OBJS	= ALGraphDFS.o ArrayBaseStack.o DFSMain.o DLinkedList.o
SOURCE	= ALGraphDFS.c ArrayBaseStack.c DFSMain.c DLinkedList.c
HEADER	= DLinkedList.h ALGraphDFS.h ArrayBaseStack.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

ALGraphDFS.o: ALGraphDFS.c
	$(CC) $(FLAGS) ALGraphDFS.c -std=c99

ArrayBaseStack.o: ArrayBaseStack.c
	$(CC) $(FLAGS) ArrayBaseStack.c -std=c99

DFSMain.o: DFSMain.c
	$(CC) $(FLAGS) DFSMain.c -std=c99

DLinkedList.o: DLinkedList.c
	$(CC) $(FLAGS) DLinkedList.c -std=c99


clean:
	rm -f $(OBJS) $(OUT)