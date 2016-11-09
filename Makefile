all: run
	./run

run: run.o heap.o
	g++ -o run run.o heap.o

run.o: run.cpp
	g++ -c -o run.o run.cpp

heap.o: heap.h heap.cpp
	g++ -c -o heap.o heap.cpp


