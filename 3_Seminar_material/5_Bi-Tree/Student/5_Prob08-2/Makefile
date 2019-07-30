OBJS	= BinaryTree2.o ExpressionMain.o ExpressionTree.o ListBaseStack.o
SOURCE	= BinaryTree2.c ExpressionMain.c ExpressionTree.c ListBaseStack.c
HEADER	= BinaryTree2.h ExpressionTree.h ListBaseStack.h
OUT	= a.exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

BinaryTree2.o: BinaryTree2.c
	$(CC) $(FLAGS) BinaryTree2.c 

ExpressionMain.o: ExpressionMain.c
	$(CC) $(FLAGS) ExpressionMain.c 

ExpressionTree.o: ExpressionTree.c
	$(CC) $(FLAGS) ExpressionTree.c 

ListBaseStack.o: ListBaseStack.c
	$(CC) $(FLAGS) ListBaseStack.c 


clean:
	rm -f $(OBJS) $(OUT)