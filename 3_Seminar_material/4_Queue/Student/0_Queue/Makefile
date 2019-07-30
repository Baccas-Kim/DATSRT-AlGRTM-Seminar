OBJS	= CircularQueue.o CircularQueueMain.o
SOURCE	= CircularQueue.c CircularQueueMain.c
HEADER	= CircularQueue.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

CircularQueue.o: CircularQueue.c
	$(CC) $(FLAGS) CircularQueue.c 

CircularQueueMain.o: CircularQueueMain.c
	$(CC) $(FLAGS) CircularQueueMain.c 


clean:
	rm -f $(OBJS) $(OUT)