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
    void menue();
    void addTask();
    void removeTask();
    void DisplayTasks();
    void run();
};
