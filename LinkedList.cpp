#include <iostream>
#include <stdexcept>
#include "LinkedList.h"

using namespace std;

template <typename T>
LinkedList<T>::LinkedList()
{
    m_head = nullptr;
    m_length = 0;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    clear();
}

template <typename T>
void LinkedList<T>::insert(int index, T entry)
{

    if (index < 0 || index > m_length)
        throw(runtime_error("Cannot insert; invalid index\n"));

    else if (index == 0)
    {
        Node<T> *temp = new Node<T>(entry);
        temp->setNext(m_head);
        m_head = temp;
        m_length++;
    }

    else
    {
        Node<T> *temp = m_head;
        for (int i = 0; i < index - 1; i++)
            temp = temp->getNext();

        Node<T> *temp2 = new Node<T>(entry);
        temp2->setNext(temp->getNext());
        temp->setNext(temp2);

        m_length++;
    }
}

template <typename T>
void LinkedList<T>::remove(int index)
{
    Node<T> *temp = m_head;

    if (index < 0 || index >= m_length)
        throw(runtime_error("Cannot remove; invalid index\n"));

    else if (index == 0)
    {
        m_head = m_head->getNext();
        delete temp;
        m_length--;
    }

    else
    {
        for (int i = 0; i < index - 1; i++)
            temp = temp->getNext();
        Node<T> *temp2 = temp->getNext();
        temp2 = temp2->getNext();
        delete temp->getNext(); //this deletes temp getNext but now tempNext has changed to be the next next
        temp->setNext(temp2);
        m_length--;
    }
}

template <typename T>
void LinkedList<T>::replace(int index, T entry)
{
    Node<T> *temp = m_head;

    if (index < 1 || index > m_length + 1)
        throw(runtime_error("Cannot Replace; invalid index\n"));
    else
    {
        for (int i = 0; i < index; i++)
            temp = temp->getNext();

        temp->setEntry(entry);
    }
}

template <typename T>
T LinkedList<T>::getEntry(int index)
{
    if (index < 0 || index > m_length)
        throw(runtime_error("Error!; invalid index\n"));
    else
    {
        Node<T> *temp = m_head;
        for (int i = 0; i < index; i++)
            temp = temp->getNext();
        return (temp->getEntry());
    }
}

template <typename T>
void LinkedList<T>::clear()
{
    while (m_length != 0)
        remove(1);
}

template <typename T>
int LinkedList<T>::getLength()
{
    return (m_length);
}

template class LinkedList<string>;