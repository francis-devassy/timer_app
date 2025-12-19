CC = gcc
CFLAGS = -Wall

INCLUDES  =
INCLUDES += -I./common

CFLAGS += $(INCLUDES)

SRCS  = 
SRCS += main.c

main: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o timerApp

clean:
	rm -f timerApp
