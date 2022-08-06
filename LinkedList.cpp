#include <iostream>
#include "LinkedList.h"

using namespace std;

template <typename T>
LinkedList<T>::LinkedList()
{
    m_head = nullptr;
    m_lenght = 0;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    clear();
}

template <typename T>
void LinkedList<T>::insert(int index, T entry)
