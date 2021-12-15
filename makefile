all : $(APPLI) clean
$(APPLI) : main.o complexe.o
        gcc -Wall main.o complexe.o -o $(APPLI) -lm
complexe.o : complexe.c complexe.h
        gcc -Wall -c complexe.c
main.o : main.c complexe.h
        gcc -Wall -c main.c

# deleting files objects
clean : $(APPLI)
        rm -f *.o
