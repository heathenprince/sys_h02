default:
	make all
	make run
	make clean

all: list.o main.o
	gcc main.o list.o -o list

list.o: list.c list.h
	gcc -c list.c

main.o: main.c list.h
	gcc -c main.c

clean:
	rm *.o
	rm *~
	rm list

run:
	./list

