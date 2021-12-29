all : ${APPLI} clean

OBJETS = main.o complexe.o
CFLAGS = -Wall -g -O3
CC = gcc

$(APPLI) : $(OBJETS)
	$(CC) $(CFLAGS) $(OBJETS) -o $(APPLI) -lm
main.o : main.c complexe.h
	$(CC) $(CFLAGS) -c main.c
complexe.o : complexe.c complexe.h
	$(CC) $(CFLAGS) -c complexe.c
clean : run
	rm -f *.o
run : $(APPLI)
	./$(APPLI)
