#include <iostream>

using namespace std;

void displayTodoList() {

}

void addTask() {

}

void removeTask() {
    
}

void displayMenu() {
    int option;
    while (true) {
        cout << "Menu:\n";
        cout << "1) Display todo list\n";
        cout << "2) Add task\n";
        cout << "3) Remove task\n";
        cout << "4) Exit\n";
        cout << "Enter option: ";
        cin >> option;
        if (option == 1) {
            displayTodoList();
        }
        else if (option == 2) {
            addTask();
        }
        else if (option == 3) {
            removeTask();
        }
        else if (option == 4)
            break;
    }
}
