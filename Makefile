CFLAGS := -Iinclude


all: test

test: tests/main.c
	$(CC) $(CFLAGS) tests/main.c -o main 
