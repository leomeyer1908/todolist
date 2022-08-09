prog: main.o Executive.o LinkedList.o Node.o
	g++ main.o Executive.o LinkedList.o Node.o -o prog

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Executive.o: Executive.cpp Executive.h
	g++ -std=c++11 -c Executive.cpp

LinkedList.o: LinkedList.cpp LinkedList.h
	g++ -std=c++11 -c LinkedList.cpp

Node.o: Node.cpp Node.h
	g++ -std=c++11 -c Node.cpp

clean:
	rm -f *.o prog