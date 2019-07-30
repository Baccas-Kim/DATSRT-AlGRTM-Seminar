OBJS	= BinarySearchTreeDelMain.o BinaryTree3.o BinarySearchTree2.o
SOURCE	= BinarySearchTreeDelMain.c BinaryTree3.c BinarySearchTree2.c
HEADER	= BinaryTree3.h BinarySearchTree2.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

BinarySearchTreeDelMain.o: BinarySearchTreeDelMain.c
	$(CC) $(FLAGS) BinarySearchTreeDelMain.c 

BinaryTree3.o: BinaryTree3.c
	$(CC) $(FLAGS) BinaryTree3.c 

BinarySearchTree2.o: BinarySearchTree2.c
	$(CC) $(FLAGS) BinarySearchTree2.c 


clean:
	rm -f $(OBJS) $(OUT)