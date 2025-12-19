CC = gcc
CFLAGS = -Wall -I./display -I./include/inc

main: main.c display/display.c
	$(CC) $(CFLAGS) main.c display/display.c -o main

clean:
	rm -f main
