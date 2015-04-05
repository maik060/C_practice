CC = gcc
CFLAG = -g -Wall


all: temperature


temperature: temperature.o
	$(CC) $@.o -o $@

temperature.o: temperature.c


%.o: %.c
	$(CC) -c $< -o $@


clean: clean_temperature 

clean_temperature:
	rm temperature temperature.o
