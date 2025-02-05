#ifndef TASKOPERATIONS_HPP
#define TASKOPERATIONS_HPP

#include <iostream>
#include <vector>
#include "TaskManager.hpp"
class TaskOperations


{

public:
    std::vector<Tasks> task_list;

    // functions for adding a task

    void create_task(std::string name, std::string description, bool complete);

    // function for deleting

    void delete_task(const std::string &name);

    // function for updating

    void update_task(const std::string &name, const std::string &description, const bool &complete);

    // function for reading task

    Tasks* read_task(const std::string &name);
};

#endif