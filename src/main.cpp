#include <iostream>
#include "../include/TaskOperations.hpp"  // ✅ Correct relative path

int main() {
    TaskOperations taskManager;  // ✅ Create an instance of TaskOperations

    // ✅ Adding tasks
    taskManager.create_task("Homework", "Complete math exercises", false);
    taskManager.create_task("Workout", "Go to the gym", true);
    taskManager.create_task("Read", "Read 10 pages of a book", false);

    std::cout << "✅ Tasks Added Successfully!\n";

    // ✅ Updating a task
    taskManager.update_task("Math HomeWork", "None", true);
    std::cout << "📝 Updated Task: Homework to Math Homework\n";

    // ✅ Deleting a task
    taskManager.delete_task("Read");
    std::cout << "❌ Deleted Task: Read\n";


    return 0;
}
