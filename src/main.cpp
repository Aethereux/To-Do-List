#include <iostream>
#include <vector>
#include <conio.h>
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
    Task() {
        this->id = 0;
        this->name = "";
        this->description = "";
        this->dueDate = "";
        this->priority = 0;
        this->completed = false;
    }
    Task(int ID, string n, string desc, string due, int prio, bool completed) {
        this->id = ID;
        this->name = n;
        this->description = desc;
        this->dueDate = due;
        this->priority = prio;
        this->completed = completed;
    }

    void print() const {
        cout << "ID: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Description: " << description << "\n";
        cout << "Due Date: " << dueDate << "\n";
        cout << "Completed: " << (completed ? "Yes" : "No") << "\n";
        cout << "Priority: " << priority << "\n";
    }

    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    string getDescription() {
        return description;
    }

    string getDue() {
        return dueDate;
    }

    int getPriority() {
        return priority;
    }

    bool getStatus() {
        return completed;
    }    

    void setId(int ID) {
        this->id = ID;
    }
    
    void setName(string name) {
        this->name = name;
    }

    void setDescription(string description) {
        this->description = description;
    }

    void setDue(string dueDate) {
        this->dueDate = dueDate;
    }
    
    void setPriority(int priority) {
        this->priority = priority;
    }

    void setStatus (bool complete) {
        this->completed = complete;
    }


};


class TaskManager {
private:
    vector<Task> tasks;
public:

    void addTask(const Task& task) {
        this->tasks.push_back(task);
    }
    void deleteTask(int taskId);
    void updateTask(int taskId, const Task& updatedTask);
    void displayTasks() const {
        for (const Task& task : tasks) {
            task.print();
            cout << "\n";
        }
    }
    
};


int main () {
    TaskManager taskManager;
    // Main program loop
    while (true) {
        int id, priority;
        bool completed;
        string name, description, dueDate;
        Task task;
        // Display menu options
        cout << "Task Manager\n";
        cout << "1. Add Task\n";
        cout << "2. Delete Task\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Display Tasks\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";

        int choice = 0;
        cin >> choice;

        switch(choice) {
            case 1:
                // Add Task
                // Prompt user for task details and add it to the Task Manager
                cout << "\nEnter ID: "; cin >> id;
                cout << "\nEnter Name: "; cin >> name;
                cout << "\nEnter Description: "; cin >> description;
                cout << "\nEnter Due date: "; cin >> dueDate;
                cout << "\nEnter Priority (1 = Low, 2 = Medium, 3 = High): "; cin >> priority;
                task.setId(id);
                task.setName(name);
                task.setDescription(description);
                task.setDue(dueDate);
                task.setPriority(priority);
                task.setStatus(false); // by default
                taskManager.addTask(task); 
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
                char input;
                taskManager.displayTasks();
                // Call the displayTasks() method of TaskManager
                    cout << "\nPress Any Key to continue..."; 
                    getch();
                break;
            case 5:
                // Exit the program
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

        system("cls");

    };
} 