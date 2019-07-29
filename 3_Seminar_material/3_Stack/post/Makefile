OBJS	= Main.o PostCalculator.o ListBaseStack.o
SOURCE	= Main.c PostCalculator.c ListBaseStack.c
HEADER	= PostCalculator.h ListBaseStack.h
OUT	= output
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

Main.o: Main.c
	$(CC) $(FLAGS) Main.c 

PostCalculator.o: PostCalculator.c
	$(CC) $(FLAGS) PostCalculator.c 

ListBaseStack.o: ListBaseStack.c
	$(CC) $(FLAGS) ListBaseStack.c 

clean:
	rm -f $(OBJS) $(OUT)
