#include "Tiger.h"
#include <iostream>

Tiger::Tiger()
{
    age = -1;
    name = "EMPTY";
}

Tiger::Tiger(int tigerAge, std::string tigerName)
{
    age = tigerAge;
    name = tigerName;
}

Tiger::~Tiger()
{
}

std::string Tiger::getName()
{
    return name;
}

int Tiger::getAge()
{
    return age;
}

void Tiger::setName(std::string newName)
{
    if (!newName.empty())
    {
        name = newName;
    }
}

void Tiger::setAge(int newAge)
{
    if (newAge > 0)
    {
        age = newAge;
    }
}

void Tiger::eatFood()
{
    std::cout << name << " (aged " << age << " years old) eats their meal of meat voraciously!" << std::endl;
}
