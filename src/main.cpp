#include <iostream>
#include <vector>
using namespace std;

class Task {
private:
    int id;
    string name;
    string description;
    string dueDate;
    int priority; // 1: Low, 2: Medium, 3: High
    bool completed;

public:
    // Constructor, getters, setters
};


class TaskManager {
private:
    vector<Task> tasks;

public:
    void addTask(const Task& task);
    void deleteTask(int taskId);
    void updateTask(int taskId, const Task& updatedTask);
    void displayTasks() const;
    // Other methods as needed
};

void menu();

int main () {
    menu();
}

void menu () {
   TaskManager taskManager;

    // Main program loop
    while (true) {
        // Display menu options
        cout << "Task Manager\n";
        cout << "1. Add Task\n";
        cout << "2. Delete Task\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Display Tasks\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                // Add Task
                // Prompt user for task details and add it to the Task Manager
                break;
            case 2:
                // Delete Task
                // Prompt user for the task ID to delete
                break;
            case 3:
                // Mark Task as Completed
                // Prompt user for the task ID to mark as completed
                break;
            case 4:
                // Display Tasks
                // Call the displayTasks() method of TaskManager
                break;
            case 5:
                // Exit the program
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } 
};
    