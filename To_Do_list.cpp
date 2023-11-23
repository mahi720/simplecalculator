#include <iostream>
#include <vector>
#include <string>
using namespace std;

// A struct to represent a task
struct Task {
    string name; // The name of the task
    bool completed; // The status of the task
};

// A class to manage the tasks
class TaskManager {
    private:
        vector<Task> tasks; // A vector to store the tasks
    public:
        // A method to add a task to the vector
        void addTask(string name) {
            Task newTask; // Create a new task
            newTask.name = name; // Assign the name
            newTask.completed = false; // Set the status to false
            tasks.push_back(newTask); // Add the task to the vector
            cout << "Task added: " << name << endl; // Print a message
        }

        // A method to display the tasks in the vector
        void viewTasks() {
            cout << "Tasks:" << endl;
            for (int i = 0; i < tasks.size(); i++) { // Loop through the vector
                cout << i + 1 << ". " << tasks[i].name; // Print the task name
                if (tasks[i].completed) { // If the task is completed
                    cout << " (Completed)"; // Print the status
                }
                cout << endl;
            }
        }

        // A method to mark a task as completed
        void markTask(int index) {
            if (index >= 1 && index <= tasks.size()) { // If the index is valid
                tasks[index - 1].completed = true; // Set the status to true
                cout << "Task marked as completed: " << tasks[index - 1].name << endl; // Print a message
            }
            else { // If the index is invalid
                cout << "Invalid task index." << endl; // Print an error message
            }
        }

        // A method to remove a task from the vector
        void removeTask(int index) {
            if (index >= 1 && index <= tasks.size()) { // If the index is valid
                string name = tasks[index - 1].name; // Store the task name
                tasks.erase(tasks.begin() + index - 1); // Erase the task from the vector
                cout << "Task removed: " << name << endl; // Print a message
            }
            else { // If the index is invalid
                cout << "Invalid task index." << endl; // Print an error message
            }
        }
};

// A function to display the menu options
void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Add a task" << endl;
    cout << "2. View tasks" << endl;
    cout << "3. Mark a task as completed" << endl;
    cout << "4. Remove a task" << endl;
    cout << "5. Exit" << endl;
}

// The main function
int main() {
    TaskManager tm; // Create a task manager object
    int choice; // A variable to store the user's choice
    string name; // A variable to store the task name
    int index; // A variable to store the task index
    bool exit = false; // A flag to indicate whether to exit the program
    while (!exit) { // While the flag is false
        displayMenu(); // Display the menu
        cout << "Enter your choice: ";
        cin >> choice; // Read the user's choice
        switch (choice) { // Switch on the choice
            case 1: // If the choice is 1
                cout << "Enter the task name: ";
                cin.ignore(); // Ignore the newline character
                getline(cin, name); // Read the task name
                tm.addTask(name); // Add the task
                break;
            case 2: // If the choice is 2
                tm.viewTasks(); // View the tasks
                break;
            case 3: // If the choice is 3
                cout << "Enter the task index: ";
                cin >> index; // Read the task index
                tm.markTask(index); // Mark the task
                break;
            case 4: // If the choice is 4
                cout << "Enter the task index: ";
                cin >> index; // Read the task index
                tm.removeTask(index); // Remove the task
                break;
            case 5: // If the choice is 5
                cout << "Exiting the program." << endl;
                exit = true; // Set the flag to true
                break;
            default: // If the choice is invalid
                cout << "Invalid choice." << endl;
                break;
        }
    }
    return 0; 
}
