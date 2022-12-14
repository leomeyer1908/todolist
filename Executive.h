#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;

class Executive
{
private:
    LinkedList<string> list;

public:
    Executive();
    ~Executive();
    void menu();
    void addTask();
    void removeTask();
    void displayTasks();
    void run();
};
