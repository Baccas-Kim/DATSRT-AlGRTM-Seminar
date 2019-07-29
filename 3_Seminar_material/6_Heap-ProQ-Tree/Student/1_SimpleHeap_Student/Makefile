OBJS	= SimpleHeapMain.o SimpleHeap.o
SOURCE	= SimpleHeapMain.c SimpleHeap.c
HEADER	= SimpleHeap.h
OUT	= out.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

SimpleHeapMain.o: SimpleHeapMain.c
	$(CC) $(FLAGS) SimpleHeapMain.c 

SimpleHeap.o: SimpleHeap.c
	$(CC) $(FLAGS) SimpleHeap.c 


clean:
	rm -f $(OBJS) $(OUT)