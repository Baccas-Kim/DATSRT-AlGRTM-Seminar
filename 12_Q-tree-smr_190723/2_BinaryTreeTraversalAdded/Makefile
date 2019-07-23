OBJS	= BinaryTree2.o BinaryTreeMain2.o
SOURCE	= BinaryTree2.c BinaryTreeMain2.c
HEADER	= BinaryTree2.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

BinaryTree2.o: BinaryTree2.c
	$(CC) $(FLAGS) BinaryTree2.c 

BinaryTreeMain2.o: BinaryTreeMain2.c
	$(CC) $(FLAGS) BinaryTreeMain2.c 


clean:
	rm -f $(OBJS) $(OUT)