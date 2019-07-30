OBJS	= BinaryTree.o BinaryTreeTraverseMain.o
SOURCE	= BinaryTree.c BinaryTreeTraverseMain.c
HEADER	= BinaryTree.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

BinaryTree.o: BinaryTree.c
	$(CC) $(FLAGS) BinaryTree.c 

BinaryTreeTraverseMain.o: BinaryTreeTraverseMain.c
	$(CC) $(FLAGS) BinaryTreeTraverseMain.c 


clean:
	rm -f $(OBJS) $(OUT)