#include <iostream>
#include <stdexcept>
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
{

    if (index < 1 || index > m_length + 1)
        throw(runtime_error("Cannot insert; invalid index\n"));

    else if (index == 1)
    {
        Node<T> *temp = new Node<T>(entry);
        temp->setNext(nullptr);
        m_head = temp;

        m_lenght++;
    }

    else
    {
        Node<T> *temp = m_head;
        for (int i = 0; i < index - 1; i++)
            temp = temp->getNext();

        Node<T> temp2 = new Node<T>(entry);
        temp2->setNext(temp2->getNext());
        temp->setNext(temp2);

        m_lenght++;
    }
}

template <typename T>
void LinkedList<T>::remove(int index)
{
    Node<T> *temp = m_head;

    if (index < 1 || index > m_length + 1)
        throw(runtime_error("Cannot remove; invalid index\n"));

    else if (index == 1)
    {
        m_head->setNext(m_head->getNext());
        delete temp->getNext();
        m_lenght--;
    }

    else
    {
        for (int i = 0; i < index - 1; i++)
            temp = temp->getNext();

        Node<T> *temp2 = temp->getNext();
        temp2 = temp2->getNext();
        delete temp->getNext();
        temp->setNext(temp2->getNext());
        m_lenght--;
    }
}

template <typename T>
void LinkedList<T>::replace(int index, T entry)
{
    Node<T> *temp = m_head;

    if (index < 1 || index > m_length + 1)
        throw(runtime_error("Cannot remove; invalid index\n"));
    else
    {
        for (int i = 0; i < index; i++)
            temp = temp->getNext();

        temp->setEntry(entry);
    }
}
