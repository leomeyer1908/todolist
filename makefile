prog: main.o executive.o linkedlist.o node.o
	g++ main.o executive.o linkedlist.o node.o -o prog

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

executive.o: Executive.cpp Executive.h
	g++ -std=c++11 -c Executive.cpp

linkedlist.o: LinkedList.cpp LinkedList.h
	g++ -std=c++11 -c LinkedList.cpp

node.o: Node.cpp Node.h
 g++ -std=c++11 -c Node.cpp

clean:
	rm -f *.o prog