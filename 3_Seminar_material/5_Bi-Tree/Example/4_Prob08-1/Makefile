OBJS	= BinaryTree2.o BinaryTreeDeleteMain.o
SOURCE	= BinaryTree2.c BinaryTreeDeleteMain.c
HEADER	= BinaryTree2.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

BinaryTree2.o: BinaryTree2.c
	$(CC) $(FLAGS) BinaryTree2.c 

BinaryTreeDeleteMain.o: BinaryTreeDeleteMain.c
	$(CC) $(FLAGS) BinaryTreeDeleteMain.c 


clean:
	rm -f $(OBJS) $(OUT)