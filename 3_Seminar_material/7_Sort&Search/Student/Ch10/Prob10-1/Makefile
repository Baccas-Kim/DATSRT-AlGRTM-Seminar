OBJS	= QuickSort.o MOTQuickSort.o
SOURCE	= QuickSort.c MOTQuickSort.c
HEADER	= 
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

QuickSort.o: QuickSort.c
	$(CC) $(FLAGS) QuickSort.c 

MOTQuickSort.o: MOTQuickSort.c
	$(CC) $(FLAGS) MOTQuickSort.c 


clean:
	rm -f $(OBJS) $(OUT)