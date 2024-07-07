CC = gcc
CFLAGS = -g -Wall
SOURCES = $(wildcard src/*.c)
OBJS = $(basename $(SOURCES))

all: $(OBJS)

$(OBJS): %: %.c
	$(CC) $(CFLAGS) -o $@ $< -lm
	mv $@ bin/

show:
	echo $(SOURCES)
	echo $(OBJS)

clean:
	rm -rf *.o *.exe