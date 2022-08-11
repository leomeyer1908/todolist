#include "Executive.h"

using namespace std;

Executive::Executive()
{
}

Executive::~Executive()
{
    list.clear();
}

void Executive::menue()
{
    cout << "TO DO LIST \n";
    cout << "1)Add a Task \n2)Remove Task\n3)Display Tasks\n4) Exit\n";
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
    menue();

    while (userChoice != 4)
    {
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