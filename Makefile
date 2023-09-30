OPCIONS = -D_JUDGE_ -D_GLIBCXX_DEBUG -O2 -Wall -Wextra -Werror -Wno-sign-compare -std=c++11

main.exe: Partida.o Tablero.o Casilla.o Ficha.o Superpower.o main.o
	g++ -o main.exe main.o Partida.o Tablero.o Casilla.o Ficha.o Superpower.o

Partida.o: Partida.h Partida.cc
	g++ -c Partida.cc $(OPCIONS)

Tablero.o: Tablero.h Tablero.cc
	g++ -c Tablero.cc $(OPCIONS)

Casilla.o: Casilla.h Casilla.cc
	g++ -c Casilla.cc $(OPCIONS)

Ficha.o: Ficha.h Ficha.cc
	g++ -c Ficha.cc $(OPCIONS)
	
Superpower.o: Superpower.h Superpower.cc
	g++ -c Superpower.cc $(OPCIONS)
	
main.o: main.cc
	g++ -c main.cc $(OPCIONS)
	
tar: Partida.h Partida.cc Tablero.h Tablero.cc Casilla.h Casilla.cc Ficha.h Ficha.cc Superpower.h Superpower.cc main.cc Makefile
	tar -cvf practica.tar Partida.h Partida.cc Tablero.h Tablero.cc Casilla.h Casilla.cc Ficha.h Ficha.cc Superpower.h Superpower.cc main.cc Makefile
	
clean:
	rm *.o
	rm *.exe