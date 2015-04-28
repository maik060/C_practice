CC = gcc
CFLAG = -g -Wall
SRC_FILES := $(shell find -L ./ -regex ".*\.c$$" -type f -printf "%f\n")
#BASE_NAME := $(basename $(SRC_FILES))

#all: $(BASE_NAME)
all: obj_test

#%: %.o
#	$(CC) $@.o -o $@
%.o: %.c
	$(CC) -c $< -o $@

obj_test: obj_test.o obj_test_lib.o
	$(CC) obj_test.o obj_test_lib.o -o $@


clean:
	rm *.o
