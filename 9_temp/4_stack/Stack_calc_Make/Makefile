OBJS	= CLinkedList.o CLLBaseStack.o Main.o
SOURCE	= CLinkedList.c CLLBaseStack.c Main.c
HEADER	= CLinkedList.h CLLBaseStack.h
OUT	= app.exe
LFLAGS	 = 
#cc = gcc

all: app.exe

app.exe: $(OBJS)
	$(CC) -o $@ $^ $(LFLAGS)

%.o: %.c $(HEADER)
	$(CC) -c -o $@ $< $(LFLAGS)

# clean house
clean:
	rm -f $(OBJS) $(OUT)


