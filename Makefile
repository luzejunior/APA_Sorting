CC = gcc
FLAGS = -Wall -Werror

.PHONY: selection insertion merge quick heap counting

program: src/*.c src/*.h
	$(CC) $(FLAGS) src/*.c -o program

selection:
	./program selection

insertion:
	./program insertion

merge:
	./program merge

quick:
	./program quick

heap:
	./program heap

counting:
	./program counting