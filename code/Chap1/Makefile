CC=gcc

all: avg first

%.o: %.c # dependency definition $^ is the automatic variable
	$(CC) -c $^

avg: avg.o # $@ is the automatic variable for targets
	$(CC) -o $@ $^ 

first: first.o
	$(CC) -o $@ $^

clean:
	rm avg first *.o