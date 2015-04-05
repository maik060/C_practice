CC = gcc
CFLAG = -g -Wall


all: temperature

%.o: %.c
	$(CC) -c $< -o $@
%: %.o
	$(CC) $@.o -o $@

temperature: temperature.o
temperature.o: temperature.c

clean: clean_temperature 

clean_temperature:
	rm temperature temperature.o
