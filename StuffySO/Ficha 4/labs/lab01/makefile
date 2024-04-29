# makefile para programa vowels_v2

PROGRAM = vowels_v2
OBJS = main.o string_utils.o
CFLAGS= -Wall -Wextra

all:$(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) -o $@ $^

main.o: main.c string_utils.c
string_utils.o: string_utils.c string_utils.h

.c.o:
	$(CC) -c $(CFLAGS) $<

clean:
	rm -f $(PROGRAM) $(OBJS) *~ core