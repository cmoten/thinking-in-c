CC=gcc

all: reverse

%.o: %.c
	$(CC) -c $^

reverse: reverse.o 
	$(CC) -o $@ $^ 

clean:
	rm reverse *.o
