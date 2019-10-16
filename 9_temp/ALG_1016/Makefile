OBJS	= ALGraph.o DLinkedList.o ALGraphMain.o
SOURCE	= ALGraph.c DLinkedList.c ALGraphMain.c
HEADER	= ALGraph.h DLinkedList.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

ALGraph.o: ALGraph.c
	$(CC) $(FLAGS) ALGraph.c -std=c99

DLinkedList.o: DLinkedList.c
	$(CC) $(FLAGS) DLinkedList.c -std=c99

ALGraphMain.o: ALGraphMain.c
	$(CC) $(FLAGS) ALGraphMain.c -std=c99


clean:
	rm -f $(OBJS) $(OUT)