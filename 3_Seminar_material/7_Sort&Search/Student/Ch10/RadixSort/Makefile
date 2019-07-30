OBJS	= RadixSort.o ListBaseQueue.o
SOURCE	= RadixSort.c ListBaseQueue.c
HEADER	= ListBaseQueue.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

RadixSort.o: RadixSort.c
	$(CC) $(FLAGS) RadixSort.c 

ListBaseQueue.o: ListBaseQueue.c
	$(CC) $(FLAGS) ListBaseQueue.c 


clean:
	rm -f $(OBJS) $(OUT)