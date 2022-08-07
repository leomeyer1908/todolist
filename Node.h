#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Node
{
private:
    T m_entry;
    Node<T> *m_next;

public:
    Node(T entry);

    ~Node();

    T getEntry();

    void setEntry(T entry);

    Node<T> *getNext();

    void setNext(Node<T> *next)
};
#endif