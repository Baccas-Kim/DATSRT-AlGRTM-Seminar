OBJS	= UsefulHeapMain.o UsefulHeap.o
SOURCE	= UsefulHeapMain.c UsefulHeap.c
HEADER	= UsefulHeap.h
OUT	= out.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

UsefulHeapMain.o: UsefulHeapMain.c
	$(CC) $(FLAGS) UsefulHeapMain.c 

UsefulHeap.o: UsefulHeap.c
	$(CC) $(FLAGS) UsefulHeap.c 


clean:
	rm -f $(OBJS) $(OUT)