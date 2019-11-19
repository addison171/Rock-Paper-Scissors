CC=gcc
lab3: main.o game.o
	$(CC) -o lab3 main.o game.o
main.o: main.c game.h
	$(CC) -c main.c
game.o: game.c
	$(CC) -c game.c
clean:
	rm*.o lab3
