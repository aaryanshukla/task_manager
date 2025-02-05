#ifndef TASKMANAGER_HPP
#define TASKMANAGER_HPP

#include <string>
struct Tasks
{

    std::string task_name;

    std::string task_description;

    bool task_complete;

    Tasks(std::string name, std::string description, bool complete)
        : task_name(name), task_description(description), task_complete(complete) {}

    std::string display_view();
};

#endif
