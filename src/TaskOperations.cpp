#include "../include/TaskOperations.hpp"  // ✅ Correct relative path

void TaskOperations::create_task(std::string name, std::string description, bool complete) {
            Tasks temp = Tasks(name, description, complete);
            task_list.push_back(temp);
}

void TaskOperations::delete_task(const std::string& name) {
    for (auto it = task_list.begin(); it != task_list.end(); ++it) {
        if (it->task_name == name) {
            task_list.erase(it);  
            break;  
        }
    }
}

void TaskOperations::update_task(const std::string &name, const std::string &description, const bool &complete) {
    for(auto it = task_list.begin(); it != task_list.end(); ++it) {
        if (it->task_name == name) {
            it->task_name = name;
            it->task_description = description;
            it->task_complete = complete;
            return;
        }
        
    }
    std::cout << "Task not Found" << name << std::endl;
}

void TaskOperations::read_task(const std::string &name) {
    for(auto it = task_list.begin(); it != task_list.end(); ++it) {
        if (it->task_name == name) {
            std::cout << name << '\n' <<  std::endl;
            std::cout << it->task_description << '\n' << std::endl;
            std::cout << it->task_complete << '\n' << std::endl;
        }
        
    }
    std::cout << "Task not Found" << name << std::endl;
}