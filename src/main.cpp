#include <iostream>
#include "../include/TaskOperations.hpp"  

int main() {
    TaskOperations taskManager;  
    int choice;

    while (true) {
        std::cout << "\n📌 To-Do List Menu:\n";
        std::cout << "1️⃣ Add Task\n";
        std::cout << "2️⃣ Update Task\n";
        std::cout << "3️⃣ Delete Task\n";
        std::cout << "4️⃣ View Task\n";
        std::cout << "5️⃣ Exit\n";
        std::cout << "👉 Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();  
        if (choice == 1) {  // ✅ Add Task
            std::string name, description;
            bool complete;
            std::cout << "📌 Enter task name: ";
            std::getline(std::cin, name);
            std::cout << "📌 Enter task description: ";
            std::getline(std::cin, description);
            std::cout << "📌 Is the task complete? (1 = Yes, 0 = No): ";
            std::cin >> complete;
            std::cin.ignore();
            taskManager.create_task(name, description, complete);
            std::cout << "✅ Task Added Successfully!\n";

        } else if (choice == 2) {  // ✅ Update Task
            std::string name, new_name, new_desc;
            bool complete;
            std::cout << "📌 Enter task name to update: ";
            std::getline(std::cin, name);
            std::cout << "📌 Enter new task name: ";
            std::getline(std::cin, new_name);
            std::cout << "📌 Enter new task description: ";
            std::getline(std::cin, new_desc);
            std::cout << "📌 Is the task complete? (1 = Yes, 0 = No): ";
            std::cin >> complete;
            std::cin.ignore();
            taskManager.update_task(name, new_desc, complete);
            std::cout << "✅ Task Updated Successfully!\n";

        } else if (choice == 3) {  // ✅ Delete Task
            std::string name;
            std::cout << "📌 Enter task name to delete: ";
            std::getline(std::cin, name);
            taskManager.delete_task(name);
            std::cout << "❌ Task Deleted!\n";

        } else if (choice == 4) {  // ✅ View Task
            std::string name;
            std::cout << "📌 Enter task name to view: ";
            std::getline(std::cin, name);
            Tasks* task = taskManager.read_task(name);
            if (task) {
                std::cout << "🔍 Task Found:\n";
                std::cout << "📌 Name: " << task->task_name << "\n";
                std::cout << "📌 Description: " << task->task_description << "\n";
                std::cout << "📌 Completed: " << (task->task_complete ? "✅ Yes" : "❌ No") << "\n";
            } else {
                std::cout << "❌ Task not found!\n";
            }

        } else if (choice == 5) { 
            std::cout << "👋 Exiting... Have a great day!\n";
            break;

        } else {
            std::cout << "❌ Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
