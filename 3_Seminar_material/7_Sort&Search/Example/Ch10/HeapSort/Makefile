OBJS	= HeapSort.o UsefulHeap.o
SOURCE	= HeapSort.c UsefulHeap.c
HEADER	= UsefulHeap.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

HeapSort.o: HeapSort.c
	$(CC) $(FLAGS) HeapSort.c 

UsefulHeap.o: UsefulHeap.c
	$(CC) $(FLAGS) UsefulHeap.c 


clean:
	rm -f $(OBJS) $(OUT)