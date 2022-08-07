#include <iostream>
#include "LinkedList.h"

using namespace std;

template <typename T>
class Executive
{
private:
    LinkedList<T> list;

public:
    Executive();
    ~Executive();
    void menue();
    void addTask(T entry);
    void removeTask(int index);
    void DisplayTasks();
    void run();
};
