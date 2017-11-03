all: work.c
	gcc work.c
run: all
	./a.out
