CC = gcc
CFLAG = -g -Wall
SRC_FILES := $(shell find -L ./ -regex ".*\.c$$" -type f -printf "%f\n")
BASE_NAME := $(basename $(SRC_FILES))

all: $(BASE_NAME)

%: %.o
	$(CC) $@.o -o $@
%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm *.o
