Game: heroImp.o knightImp.o MageImp.o monsterImp.o archerImp.o clericImp.o main.o 
	g++ heroImp.o knightImp.o MageImp.o monsterImp.o archerImp.o clericImp.o main.o -Wall -pedantic -o Game

clericImp: clericImp.cpp
	g++ -c clericImp.cpp

archerImp: archerImp.cpp
	g++ -c archerImp.cpp

monsterImp: monsterImp.cpp
	g++ -c monsterImp.cpp

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