all : $(APPLI) clean

$(APPLI): $(APPLI).c
	gcc -Wall -O3 $(APPLI).c -o $(APPLI) -lm
clean: run
	rm -f *.o
run: $(APPLI)
	./$(APPLI)
