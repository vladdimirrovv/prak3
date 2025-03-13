CC = gcc

CFLAGS = -Wall

all: task1 task2 task3 task4

build:
	mkdir -p build

task1: build
	$(CC) $(CFLAGS) task1/main.c -o build/task1 -lm

task2: build
	$(CC) $(CFLAGS) task2/main.c -o build/task2 -lm

task3: build
	$(CC) $(CFLAGS) task3/main.c -o build/task3 -lm

task4: build
	$(CC) $(CFLAGS) task4/main.c -o build/task4 -lm

clean:
	rm -f build/task1 build/task2 build/task3 build/task4