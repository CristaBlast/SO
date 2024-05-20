# makefile para programa vowels_v2

PROGRAM = soma
OBJS = main.o funcoes.o funcoesAux.o
CFLAGS= -Wall -Wextra

all:$(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) -o $@ $^

#if U want to knwo dependecies -> gcc -MM *.c
funcoesAux.o: funcoesAux.c funcoesAux.h funcoes.h
funcoes.o: funcoes.c funcoes.h
main.o: main.c funcoes.h funcoesAux.h
.c.o:
	$(CC) -c $(CFLAGS) $<

clean:
	rm -f $(PROGRAM) $(OBJS) *~ core