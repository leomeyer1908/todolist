#include <iostream>
#include <string>
#include "Executive.h"

using namespace std;

template <typename T>
void Executive<T>::menue()
{
    cout << "TO DO LIST \n";
    cout << "Add a Task \nRemove Task\nDisplay Tasks\n";
}

template <typename T>
void Executive<T>::addTask(T entry)
{
    string task;
    cout << "Task : ";
    cin >> task >> endl;

    list.insert(1, task);
}

template <typename T>
void Executive<T>::removeTask(int index)
{
    int index = 0;
    cout << "Enter index: ";
    cin >> index >> endl;

    list.remove(index);
}
