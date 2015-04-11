CC = gcc
CFLAG = -g -Wall
SRC_FILES := $(shell find -L ./ -regex ".*\.c$$" -type f -printf "%f\n")
BASE_NAME := $(basename $(SRC_FILES))

all: $(BASE_NAME)

%: %.o
	$(CC) $@.o -o $@
%.o: %.c
	$(CC) -c $< -o $@

temperature: temperature.o
temperature.o: temperature.c
1-3: 1-3.o
1-3.o: 1-3.c
1-4: 1-4.o
1-4.o: 1-4.c

clean:
	rm *.o
