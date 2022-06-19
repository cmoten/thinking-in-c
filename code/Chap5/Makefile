CC=gcc

all: float limits missing lab2

%.o: %.c
	$(CC) -c $^

reverse: reverse.o 
	$(CC) -o $@ $^ 

clean:
	rm *.o