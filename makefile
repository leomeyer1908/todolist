prog: main.o Executive.o
	g++ -std=c++11 -g -Wall main.o Executive.o -o prog
main.o: main.cpp LinkedList.h LinkedList.cpp Node.h Node.cpp
	g++ -g -std=c++11 -g -Wall -c main.cpp
Executive.o: Executive.cpp Executive.h
	g++ -g -std=c++11 -g -Wall -c Executive.cpp
clean:
	rm *.o prog