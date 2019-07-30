OBJS	= BinarySearchTreeMain.o BinaryTree2.o BinarySearchTree.o
SOURCE	= BinarySearchTreeMain.c BinaryTree2.c BinarySearchTree.c
HEADER	= BinaryTree2.h BinarySearchTree.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

BinarySearchTreeMain.o: BinarySearchTreeMain.c
	$(CC) $(FLAGS) BinarySearchTreeMain.c 

BinaryTree2.o: BinaryTree2.c
	$(CC) $(FLAGS) BinaryTree2.c 

BinarySearchTree.o: BinarySearchTree.c
	$(CC) $(FLAGS) BinarySearchTree.c 


clean:
	rm -f $(OBJS) $(OUT)