SRCDIRS = $(shell find . -type d ! -name .)

all:
	for src in $(SRCDIRS); do \
		$(MAKE) -C $$src; \
	done

clean:
	for src in $(SRCDIRS); do \
		$(MAKE) -C $$src clean; \
	done

