CC = gcc

all:
	$(CC) src/main.c -o program

selection:
	./program selection

insertion:
	./program insertion