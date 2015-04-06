CC = gcc
CFLAG = -g -Wall


all: temperature 1-3

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
