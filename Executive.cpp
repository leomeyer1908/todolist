#include "Executive.h"

using namespace std;

Executive::Executive()
{
}

Executive::~Executive()
{
    list.clear();
}

void Executive::menu()
{
    cout << "Todo List Menu\n";
    cout << "1) Add a Task \n";
    cout << "2) Remove Task\n";
    cout << "3) Display Tasks\n";
    cout << "4) Exit\n";
}

void Executive::addTask()
{
    string task;
    cout << "Task : ";
    cin >> task; // user inputs a task

    list.insert(list.getLength(), task); // it gets added to the linkedlist
}

void Executive::removeTask()
{
    DisplayTasks(); // it shows all the tasks
    int index;
    cout << "Enter index: ";
    cin >> index;

    list.remove(index);
}

void Executive::DisplayTasks()
{
    for (int i = 0; i < list.getLength(); i++)
    {
        cout << list.getEntry(i) << endl;
    }
}

void Executive::run()
{
    int userChoice = 0;
    while (userChoice != 4)
    {
        menu();
        cout << "Enter a Choice: ";
        cin >> userChoice;
        if (userChoice == 1)
            addTask();
        else if (userChoice == 2)
            removeTask();
        else if (userChoice == 3)
            DisplayTasks();
        else
            cout << "Invalid input!!\n";
    }
}