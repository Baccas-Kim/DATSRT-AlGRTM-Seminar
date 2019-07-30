OBJS	= PQStringMain.o PriorityQueue.o UsefulHeap.o
SOURCE	= PQStringMain.c PriorityQueue.c UsefulHeap.c
HEADER	= PriorityQueue.h UsefulHeap.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

PQStringMain.o: PQStringMain.c
	$(CC) $(FLAGS) PQStringMain.c 

PriorityQueue.o: PriorityQueue.c
	$(CC) $(FLAGS) PriorityQueue.c 

UsefulHeap.o: UsefulHeap.c
	$(CC) $(FLAGS) UsefulHeap.c 


clean:
	rm -f $(OBJS) $(OUT)