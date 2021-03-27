Game: heroImp.o knightImp.o MageImp.o  main.o
	g++ heroImp.o knightImp.o MageImp.o  main.o -Wall -pedantic -o Game

heroImp: heroImp.cpp
	g++ -c heroImp.cpp

knightImp: knightImp.cpp
	g++ -c knightImp.cpp

MageImp: MageImp.cpp
	g++ -c MageImp.cpp

main: main.cpp
	g++ -c main.cpp

clean:
	rm *.o
	rm Game