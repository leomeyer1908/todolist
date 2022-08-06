#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Node.h"

using namespace std;

template <typename T>
class LinkedList
{
private:
    Node<T> *m_head;
    int m_lenght;

public:
    LinkedList();
    ~LinkedList();
    void insert(int index, T entry);
    void remove(int index);
    void replace(int index, T entry);
    T getEntry(int index);
    void clear()
};
#endif