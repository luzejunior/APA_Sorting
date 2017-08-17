CC = gcc

all:
	$(CC) main.c -o program

selection:
	./program selection

insertion:
	./program insertion