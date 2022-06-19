CC=gcc

all: float limits missing lab2

%.o: %.c
	$(CC) -c $^

float: float.o 
	$(CC) -o $@ $^ 

limits: limits.o
	$(CC) -o $@ $^

missing: missing.o
	$(CC) -o $@ $^

lab2: lab2.o
	$(CC) -o $@ $^

clean:
	rm float limits missing lab2 *.o