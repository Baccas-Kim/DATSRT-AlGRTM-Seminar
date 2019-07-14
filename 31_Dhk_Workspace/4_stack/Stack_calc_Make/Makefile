OBJS	= CLinkedList.o CLLBaseStack.o main.o
SOURCE	= CLinkedList.c CLLBaseStack.c main.c
HEADER	= CLinkedList.h CLLBaseStack.h
OUT	= app.exe
LFLAGS	 = 
cc = gcc

all: app.exe

app.exe: $(OBJS)
	$(CC) -o $@ $^ $(LFLAGS)

%.o: %.c $(HEADER)
	$(CC) -c -o $@ $< $(LFLAGS)

# clean house
clean:
	rm -f $(OBJS) $(OUT)


main.o: main.c
	$(CC) -c main.c -o main.o $(CFLAGS)

CLinkedList.o: CLinkedList.c
	$(CC) -c CLinkedList.c -o CLinkedList.o $(CFLAGS)

CLLBaseStack.o: CLLBaseStack.c
	$(CC) -c CLLBaseStack.c -o CLLBaseStack.o $(CFLAGS)

