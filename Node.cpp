#include "Node.h"

template <typename T>
Node<T>::Node(T entry)
{
    m_entry = entry;
    m_next = nullptr;
}

template <typename T>
T Node<T>::getEntry()
{
    return (m_entry);
}

template <typename T>
void Node<T>::setEntry(T entry)
{
    m_entry = entry;
}

template <typename T>
Node<T> *Node<T>::getNext()
{
    return (m_next);
}

template <typename T>
void Node<T>::setNext(Node<T> *next)
{
    m_next = next;
}

template class Node<string>;
template class Node<int>;
template class Node<char>;