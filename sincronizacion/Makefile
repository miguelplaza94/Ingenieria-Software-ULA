 # universidad de los andes
 # sincronizacion de procesos
 # asignatura: Sistemas Operativos
 # autor: Alvaro Araujo
 # fecha: 20/04/2018

CC  = gcc
INC =
OPC = -g -c
LIB =
LIBH = -pthread
EXECUTABLES = programa1.out programa2.out


.c.o:
	$(CC) $(OPC) $(INC) $<

all: $(EXECUTABLES)

programa1.out: programa1.o
	$(CC) -o $@ $< $(LIB)

programa2.out: programa2.o
	$(CC) -o $@ $< $(LIB)

clean:
	rm -fr *~ *.o $(EXECUTABLES)
