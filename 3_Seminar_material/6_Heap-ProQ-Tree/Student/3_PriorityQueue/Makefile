OBJS	= PriorityQueueMain.o UsefulHeap.o PriorityQueue.o
SOURCE	= PriorityQueueMain.c UsefulHeap.c PriorityQueue.c
HEADER	= UsefulHeap.h PriorityQueue.h
OUT	= out.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

PriorityQueueMain.o: PriorityQueueMain.c
	$(CC) $(FLAGS) PriorityQueueMain.c 

UsefulHeap.o: UsefulHeap.c
	$(CC) $(FLAGS) UsefulHeap.c 

PriorityQueue.o: PriorityQueue.c
	$(CC) $(FLAGS) PriorityQueue.c 


clean:
	rm -f $(OBJS) $(OUT)