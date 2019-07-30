OBJS	= AVLTreeMain.o BinarySearchTree3.o BinaryTree3.o AVLRebalance.o
SOURCE	= AVLTreeMain.c BinarySearchTree3.c BinaryTree3.c AVLRebalance.c
HEADER	= BinarySearchTree3.h BinaryTree3.h AVLRebalance.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

AVLTreeMain.o: AVLTreeMain.c
	$(CC) $(FLAGS) AVLTreeMain.c 

BinarySearchTree3.o: BinarySearchTree3.c
	$(CC) $(FLAGS) BinarySearchTree3.c 

BinaryTree3.o: BinaryTree3.c
	$(CC) $(FLAGS) BinaryTree3.c 

AVLRebalance.o: AVLRebalance.c
	$(CC) $(FLAGS) AVLRebalance.c 


clean:
	rm -f $(OBJS) $(OUT)