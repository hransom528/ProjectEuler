CC = gcc
CFLAGS = -g -Wall
SOURCES = $(wildcard ./*.c)
OBJS = 

*.o : *.c
	gcc -o 

show:
	echo $(SOURCES)

clean:
	rm -rf *.o *.exe