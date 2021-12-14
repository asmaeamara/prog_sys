main : main.o complexe.o
       gcc -Wall  main.o complexe.o -o main -lm
main.o : main.c complexe.h
       gcc -Wall -c main.c
complexe.o : complexe.c complexe.h
       gcc -Wall -c complexe.c
