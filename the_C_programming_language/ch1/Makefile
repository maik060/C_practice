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

clean: clean_temperature clean_1-3

clean_temperature:
	rm temperature temperature.o
clean_1-3:
	rm 1-3 1-3.o


test:
	for name in $(SRC_FILES); do \
		echo $$name ; \
	done

