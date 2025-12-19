CC = gcc
CFLAGS = -Wall

INCLUDES  =
INCLUDES += -I./display
INCLUDES += -I./include/inc

CFLAGS += $(INCLUDES)

SRCS  = 
SRCS += main.c
SRCS += display/display.c

main: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o timerApp

clean:
	rm -f timerApp
